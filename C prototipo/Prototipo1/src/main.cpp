#include <Arduino.h>

// Pines
const int pinCapacitivo = 14;   // GPIO14, pin del sensor capacitivo
const int pinSensorInfrarrojo = 34;   // GPIO34, pin analógico para el sensor infrarrojo
const int pinBoton = 12;   // GPIO12, pin del botón
const int pinLedRojo = 26;   // GPIO26, pin del LED rojo
const int pinLedVerde = 27; // GPIO27, pin del LED verde
int estadoCapacitivo = HIGH; // Estado inicial del sensor capacitivo

// Variables
bool leyendo = false;  // Estado de lectura
unsigned long tiempoInicio; // Tiempo de inicio de la lectura

void setup() {
    Serial.begin(115200); // Iniciar comunicación serial a 115200 baudios
    Serial.println("Hola, ESP32!"); // Mensaje de bienvenida
    pinMode(pinCapacitivo, INPUT); // Configurar pin del sensor capacitivo como entrada
    pinMode(pinSensorInfrarrojo, INPUT); // Configurar pin del sensor infrarrojo como entrada
    pinMode(pinBoton, INPUT_PULLUP);  // Configurar el botón con resistencia pull-up interna
    pinMode(pinLedRojo, OUTPUT); // Configurar pin del LED rojo como salida
    pinMode(pinLedVerde, OUTPUT); // Configurar pin del LED verde como salida
}

void loop() {
    estadoCapacitivo = digitalRead(pinCapacitivo); // Leer el estado del sensor capacitivo
    
    // Si se presiona el botón
    if (digitalRead(pinBoton) == LOW) {
        if (!leyendo) { // Si no está en estado de lectura
            leyendo = true; // Cambiar el estado a leyendo
            tiempoInicio = millis(); // Guardar el tiempo de inicio
            Serial.println("Inicio de lectura"); // Imprimir mensaje en monitor serie
            digitalWrite(pinLedVerde, LOW); // Apagar el LED verde al inicio de la lectura
        }
    }

    if (leyendo) {
        unsigned long tiempoActual = millis();
        if (tiempoActual - tiempoInicio < 10000) {  // Leer durante 10 segundos
            digitalWrite(pinLedVerde, !digitalRead(pinLedVerde)); // Parpadeo del LED verde
            int valorSensor = analogRead(pinSensorInfrarrojo); // Leer valor del sensor infrarrojo
            Serial.print("Valor del Sensor: ");
            Serial.println(valorSensor);  // Mostrar valor en monitor serie
            delay(500);  // Parpadeo y lectura cada 500 ms
        } else {
            leyendo = false;
            digitalWrite(pinLedVerde, HIGH);  // LED verde fijo al terminar la lectura
            Serial.println("Fin de lectura");
        }
    } else if (leyendo == false && estadoCapacitivo == HIGH) {
        // Parpadeo del LED rojo cuando no hay lectura
        digitalWrite(pinLedRojo, !digitalRead(pinLedRojo));
        delay(500);
    }
}
