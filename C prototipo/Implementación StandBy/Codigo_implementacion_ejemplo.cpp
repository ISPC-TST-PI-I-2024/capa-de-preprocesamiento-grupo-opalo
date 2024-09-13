#include "WiFi.h"
#include "esp_sleep.h"

const int sensorPin = 34;  // Pin conectado al sensor CNY70 (Pin de ejemplo)
const int buttonPin = 0;   // Pin del botón para salir de hibernación (Pin de ejemplo)

int zeroCount = 0;         // Contador de mediciones "0"
const int maxZeroCount = 3; // Número de mediciones "0" antes de hibernar
const int numMediciones = 3;  // Número de mediciones seguidas antes del modo Light Sleep

void setup() {
  Serial.begin(115200);

  // Configura los pines del sensor y botón
  pinMode(sensorPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Botón con resistencia pull-up

  // Conecta al WiFi al despertar (desde el inicio o tras hibernación)
  reconnectWiFi();

  // Configura el botón para despertar del modo hibernación
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_0, 0);  // El botón está conectado al pin 0
}

void loop() {
  for (int i = 0; i < numMediciones; i++) {
  // Realiza las mediciones con el sensor CNY70
  int sensorValue = analogRead(sensorPin);
  Serial.println("Valor del sensor: " + String(sensorValue));
  }

  // Solución para manejar las mediciones de "0"
  if (sensorValue == 0) {
    zeroCount++;  // Incrementa el contador de mediciones "0"
  } else {
    zeroCount = 0;  // Reinicia el contador si no es "0"
  }

  // Si se alcanzan las 3 mediciones iguales a 0, entrar en modo hibernación
  if (zeroCount >= maxZeroCount) {
    Serial.println("Se detectó que el dispositivo no está en uso, entrando en MODO HIBERNACIÓN...");
    entrarEnHibernacion();
  }

  // Envía los datos a la nube (Falta código para conectarse con la BD)
  enviarDatos(sensorValue);

  // Espera un tiempo entre mediciones
    delay(1000);

  // Se configura el ESP32 para despertar en 15 minutos (900 segundos)
  esp_sleep_enable_timer_wakeup(900000000);  // 15 minutos en microsegundos
  Serial.println("Medidas tomadas, entrando en MODO SLEEP");
  
  // Entra en modo Light Sleep
  esp_light_sleep_start();
}

void enviarDatos(int valor) {
  // Lógica para enviar los datos a la nube (Agregado a modo de ejemplo)
  Serial.println("Enviando valor del sensor a la nube: " + String(valor));
}

void entrarEnHibernacion() {
  // Apaga WiFi antes de hibernar
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  
  // Entra en hibernación
  Serial.println("[MODO HIBERNACIÓN ACTIVADO] Pulsa el botón para despertar.");
  esp_deep_sleep_start();
}

void reconnectWiFi() {
  // Conecta al WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a Wi-Fi...");
  }
  Serial.println("Conectado a Wi-Fi!");
}
