![alt_tex](../E%20Recursos/caratula.png)  
# Proyecto "Dispositivo IoT para Monitoreo Continuo de Glucosa en Pacientes Diabéticos"
  
  ## Profesor: CRISTIAN GONZALO VERA
  ## Integrantes:

    Vittorio Durgutti
    Luciano Lujan
    Integrante 3 
    Jose Marquez  
    Joaquin Garzon  
    Lisandro Juncos  
    Nahuel Velez  
    Integrante 8  


# Proyecto IoT: Prototipo de Dispositivo para Monitoreo de Glucosa

## Descripción del Proyecto

Este repositorio contiene la documentación y el código fuente para el prototipo de un dispositivo IoT diseñado para el monitoreo continuo de los niveles de glucosa en pacientes diabéticos. El objetivo de este prototipo es probar la funcionalidad básica del dispositivo, incluyendo la captura de datos, procesamiento inicial, y transmisión segura a una plataforma en la nube.

## Estructura del Prototipo

### 1. **Hardware**

**Componentes Principales:**
- **Sensor de Glucosa:** Utilizamos un sensor **[A DEFINIR]** para la medición de los niveles de glucosa. Este sensor es capaz de realizar lecturas continuas y enviar los datos al microcontrolador.  

- **Microcontrolador:** El [ESP32 WROOM](https://www.espressif.com/en/products/modules/esp32) equipado con módulos de conectividad Wi-Fi y Bluetooth y con la posibilidad de integrar un modulo LORA para comunicaciones de largo alcance, actúa como el núcleo de procesamiento en la capa EDGE. Este microcontrolador también maneja la comunicación con el sensor de glucosa.  

- **Batería:** Una batería LiPo3.7V 1000mAh como mínimo recargable en lo posible que proporcionará energía al dispositivo, asegurando la operación continua por un tiempo bastante prolongado.  

- **Carcasa:** De acuerdo a las dimensiones del prototipo con su hardware, se evaluará la construcción de una carcasa a traves de una impresora 3D.

### 2. **Software**

**Módulos Principales:**
- **Captura de Datos:** Código para la inicialización y adquisición de datos del sensor de glucosa. El software maneja la comunicación I2C/SPI con el sensor (sugerido).  

- **Procesamiento Inicial:** Algoritmos implementados en el microcontrolador para el filtrado y normalización de los datos de glucosa.  

- **Transmisión de Datos:** Código para la transmisión de los datos preprocesados a la nube utilizando protocolos [MQTT](https://mqtt.org/) o [HTTP](https://developer.mozilla.org/en-US/docs/Web/HTTP) sobre Wi-Fi/Bluetooth/LoRaWan.  

- **Gestión de Energía:** Implementación de rutinas de bajo consumo para maximizar la duración de la batería.  

- **Interfaz de Usuario:** Una simple interfaz LCD o LED que muestra el estado del dispositivo y las lecturas de glucosa en tiempo real.  


### 3. **Conectividad**

**Redes Soportadas:**
- **Wi-Fi:** El dispositivo se conecta a redes Wi-Fi para transmitir datos directamente a la nube.
- **Bluetooth:** Soporte para conectividad Bluetooth, permitiendo la sincronización con una aplicación móvil cercana.

**Protocolos Utilizados:**
- **MQTT:** Protocolo de mensajería ligero utilizado para la transmisión de datos a la plataforma en la nube.
- **HTTP/HTTPS:** Utilizado para la comunicación segura con servidores web y APIs.

### 4. **Plataforma en la Nube**

**Servicios sugeridos a Utilizar:**
- **[AWS IoT Core](https://aws.amazon.com/iot-core/) / [Azure IoT Hub](https://azure.microsoft.com/en-us/products/iot-hub/):** Para la gestión de dispositivos y la recolección de datos en tiempo real.
- **[Base de Datos NoSQL](https://aws.amazon.com/nosql/):** Almacenamiento de datos en una base de datos NoSQL para un acceso rápido y eficiente.
- **Dashboard de Monitoreo:** Una interfaz web sencilla que permite la visualización en tiempo real de los datos de glucosa transmitidos por el dispositivo.

### 5. **Pruebas y Validación**

**Pruebas Realizadas:**
- **Pruebas de Conectividad:** Verificación de la conexión Wi-Fi y Bluetooth en diferentes entornos.
- **Pruebas de Precisión:** Comparación de las lecturas del sensor con un medidor de glucosa estándar para validar la precisión.
- **Pruebas de Durabilidad:** Evaluación de la duración de la batería bajo uso continuo.

**Resultados Esperados:**
- El dispositivo debe ser capaz de operar de manera autónoma durante al menos [X] horas/semanas.
- Los datos de glucosa deben ser transmitidos a la nube con una latencia menor a [Y] segundos.
- La precisión de las lecturas debe estar dentro de un margen de error de ±[Z]%.

### 6. **Instrucciones de Configuración**

**Requisitos Previos:**
- Instalar [Visual Studio Code](https://code.visualstudio.com/) con la extensión de [PlatformIO](https://platformio.org/install/ide?install=vscode) para la programación del ESP32 WROOM.
- Clonar este repositorio y abrir el proyecto en VSCode.

**Pasos para la Configuración:**
1. **Conectar el Sensor:** Conectar el sensor de glucosa al ESP32 WROOM según el esquema de pines proporcionado en la carpeta `hardware`.
2. **Cargar el Código:** Compilar y cargar el código fuente en el ESP32 WROOM utilizando PlatformIO.
3. **Configurar la Red:** Configurar los parámetros de red (SSID, contraseña) en el archivo `config.h`.
4. **Ejecutar el Prototipo:** Encender el dispositivo y verificar que los datos se transmiten correctamente a la nube.

### 7. **Futuras Mejoras**

- **Optimización del Consumo de Energía:** Mejorar las rutinas de gestión de energía para extender la duración de la batería.
- **Mejoras en la Interfaz de Usuario:** Desarrollar una interfaz gráfica más avanzada en la aplicación móvil para la visualización de datos.
- **Integración con AI:** Implementar análisis predictivo utilizando aprendizaje automático en la nube para predecir niveles de glucosa.

## Contribuciones

Este prototipo es una versión preliminar, y las contribuciones son bienvenidas. Por favor, revisa la guía de contribuciones en el archivo `CONTRIBUTING.md` para más detalles.

## Licencia

Este proyecto está bajo la licencia ISPC. Consulta el archivo `LICENSE` para más detalles.

## Recursos Adicionales

- [Introducción a IoT y Preprocesamiento de Datos](https://www.researchgate.net/publication/332219292_Introduction_to_IoT_and_Edge_Computing)
- [Manual de AWS IoT](https://docs.aws.amazon.com/iot/latest/developerguide/what-is-aws-iot.html)
- [Fog Computing: Concepts, Architectures, and Applications](https://ieeexplore.ieee.org/document/7389486)
- [Comparativa de Bases de Datos NoSQL](https://www.mongodb.com/nosql-explained)
