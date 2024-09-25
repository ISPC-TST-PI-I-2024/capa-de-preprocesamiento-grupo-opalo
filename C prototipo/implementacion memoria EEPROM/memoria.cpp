#include <Wire.h>      // Para I2C
#include <EEPROM.h>    // Para emular EEPROM en el ESP32
#include <WiFi.h>      // Para manejar la conexión WiFi
#include <HTTPClient.h> // Para hacer peticiones HTTP (enviar datos a servidor)

// Configuraciones de WiFi aun que esto va a terminar en el panel de conexiones
const char* ssid = "tuSSID";
const char* password = "tuPASSWORD";

// Configuración EEPROM considerando una de 256Kb - De usar otra adaptamos el valor final.
const int EEPROM_SIZE = 256 * 1024;  // 256 KB
const int RECORD_SIZE = 6;  // 4 bytes para timestamp, 2 bytes para glucosa
int writeIndex = 0;  // Posición donde escribir el próximo registro

// Variables para manejo de tiempo y lecturas
unsigned long lastReadingTime = 0;  // Última medición de tiempo
const int INTERVALO_MEDICION = 900000;  // Cada 15 minutos (600000 ms)
int glucosaActual = 0;  // Valor actual de la glucosa

// Función para conectar a WiFi pasa tambien al mododulo de conexion
void connectWiFi() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando a WiFi...");
  }
  Serial.println("Conectado a WiFi!");
}

// Función para leer el valor de glucosa (simulado)
int leerGlucosa() {
  // Aca va al codigo de lectura del sensor
  // Simulamos un valor entre 70 y 150 mg/dL a modo de ejemplo
  return random(70, 150);
}

// Función para guardar la medición en la EEPROM
void guardarMedicionEnEEPROM(unsigned long timestamp, int glucosa) {
  if (writeIndex >= EEPROM_SIZE) {
    writeIndex = 0;  // Ciclar si se llena la memoria
  }

  // Guardar timestamp (4 bytes) en formato little-endian
  EEPROM.write(writeIndex, (timestamp >> 24) & 0xFF);
  EEPROM.write(writeIndex + 1, (timestamp >> 16) & 0xFF);
  EEPROM.write(writeIndex + 2, (timestamp >> 8) & 0xFF);
  EEPROM.write(writeIndex + 3, timestamp & 0xFF);

  // Guardar glucosa (2 bytes)
  EEPROM.write(writeIndex + 4, (glucosa >> 8) & 0xFF);
  EEPROM.write(writeIndex + 5, glucosa & 0xFF);

  // Incrementar índice de escritura
  writeIndex += RECORD_SIZE;

  // Guardar cambios en la EEPROM
  EEPROM.commit();
  Serial.println("Medición guardada en EEPROM.");
}

// Función para leer la medición desde la EEPROM (útil al enviar los datos)
void leerMedicionDeEEPROM(int index, unsigned long &timestamp, int &glucosa) {
  if (index >= EEPROM_SIZE) {
    return;
  }

  // Leer timestamp (4 bytes)
  timestamp = ((unsigned long)EEPROM.read(index) << 24) |
              ((unsigned long)EEPROM.read(index + 1) << 16) |
              ((unsigned long)EEPROM.read(index + 2) << 8) |
              (unsigned long)EEPROM.read(index + 3);

  // Leer glucosa (2 bytes)
  glucosa = (EEPROM.read(index + 4) << 8) | EEPROM.read(index + 5);
}

// Función para enviar los datos almacenados cuando hay conexión // a pasar tambien al modulo de conexion
void enviarDatosAlServidor() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("http://local:3000"); // a cambiar por el servidor que definamos

    for (int i = 0; i < writeIndex; i += RECORD_SIZE) {
      unsigned long timestamp;
      int glucosa;

      leerMedicionDeEEPROM(i, timestamp, glucosa);

      // Construir payload JSON para enviar
      String jsonPayload = "{\"timestamp\": " + String(timestamp) +
                          ", \"glucosa\": " + String(glucosa) + "}";

      http.addHeader("Content-Type", "application/json");
      int httpResponseCode = http.POST(jsonPayload);

      if (httpResponseCode > 0) {
        Serial.println("Datos enviados exitosamente.");
      } else {
        Serial.println("Error enviando datos.");
        break;
      }

      delay(500);  // Esperar medio segundo entre envíos. Esto por que la memoria demora en escribir la informacion
    }
    http.end();
  }
}

// Configuración inicial
void setup() {
  Serial.begin(115200);
  EEPROM.begin(EEPROM_SIZE);  // Inicializar la EEPROM
  connectWiFi();
}

// Bucle principal
void loop() {
  unsigned long tiempoActual = millis();

  // Verificar si es tiempo de tomar una nueva medición
  if (tiempoActual - lastReadingTime >= INTERVALO_MEDICION) {
    lastReadingTime = tiempoActual;

    // Leer glucosa y almacenar
    glucosaActual = leerGlucosa();
    guardarMedicionEnEEPROM(lastReadingTime, glucosaActual);
  }

  // Verificar si hay conexión y enviar los datos si es posible
  if (WiFi.status() == WL_CONNECTED) {
    enviarDatosAlServidor();
  } else {
    Serial.println("No hay conexión, guardando datos en EEPROM.");
  }

  delay(1000);  // Esperar 1 segundo antes de la próxima iteración / por seguridad, aunque la medicion pase cada 15 minutos
}
