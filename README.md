# Proyecto Integrador I 

## Instituto: ISPC  
**Carrera:** ![Tecnicatura Superior en Telecomunicaciones](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e4/Telecommunications_Tower_at_McMurdo_Station_007.jpg/800px-Telecommunications_Tower_at_McMurdo_Station_007.jpg)  
**Materia:** Proyecto Integrador I  
**Docente:** Cristian Gonzalo Vera  

## Grupo Opalo
**Integrantes:**
- Rodolfo Paz ([GitHub](https://github.com/Domi74))
- Marcos Bordon Rios ([GitHub](https://github.com/Marcos-BR-03))
- Vittorio Durigutti ([GitHub](https://github.com/vittoriodurigutti))
- Nahuel Velez ([GitHub](https://github.com/Lucasmurua19))
- Gustavo Zalazar ([GitHub](https://github.com/breaakerr))
- Jose Marquez ([GitHub](https://github.com/marquezjose))
- Luciano Lujan ([GitHub](https://github.com/lucianoilujan))
- Lisandro Juncos ([GitHub](https://github.com/Lisandro-05))
- Tiziano Paez ([GitHub](https://github.com/tpaez))
- Joaquin Garzón ([GitHub](https://github.com/Joacogarzonn))

---

## Capa de Preprocesamiento 

### Sistema IoT para la Gestión y Monitoreo de Cultivos Inteligentes

### Descripción del Proyecto:
Este proyecto busca desarrollar un sistema IoT para el monitoreo continuo de los niveles de glucosa en pacientes diabéticos, utilizando sensores no invasivos conectados a microcontroladores ESP32-Wroom. El sistema permitirá preprocesar los datos en el edge para tomar decisiones rápidas, reduciendo la dependencia de la nube, y mejorar la eficiencia en la transmisión y almacenamiento de datos. Los usuarios podrán acceder remotamente a la información, recibir alertas sobre niveles críticos de glucosa y tener un control preciso del sistema mediante una interfaz web o app.  

---

### Componentes del Proyecto:

1. **Recolección de Datos (Capa de Percepción):**
   - **Sensores:** Sensores no invasivos para medir los niveles de glucosa en sangre  del paciente.
   - **Microcontroladores ESP32-Wroom:** Los microcontroladores se encargan de recolectar datos de los sensores en tiempo real y enviarlos a la capa de procesamiento.  

2. **Preprocesamiento de Datos en el Edge (Capa de Preprocesamiento):**
   - **Implementación de Microservicios en Edge:**
     - Los microcontroladores ESP32-Wroom  actuarán como nodos edge, procesando los datos de glucosa en tiempo real.
     - Se implementarán microservicios para filtrar datos, eliminar lecturas anómalas y normalizar las entradas antes de tomar decisiones automatizadas, como ajustar los parámetros de medición o emitir alertas.
   - **Toma de Decisiones en el Edge:**
     - Basado en los datos recolectados, el sistema podrá tomar decisiones inmediatas, como activar alarmas si los niveles de glucosa están fuera de los rangos seguros.
     - La lógica de toma de decisiones reducirá la latencia al evitar enviar todos los datos a la nube, mejorando la eficiencia del sistema y asegurando una respuesta rápida ante situaciones críticas.

3. **Gestión de Datos en el Fog (Capa de Preprocesamiento):**
   - **Controladores Fog:**
     - Un dispositivo fog más robusto o un servidor local gestionará la integración de los datos provenientes de múltiples nodos edge, consolidando la información de diferentes pacientes o sensores.
     - APIs serán implementadas para la comunicación entre los nodos edge y la capa de almacenamiento en la nube o el servidor local.
   - **Filtrado y Normalización Avanzada:**
     - El dispositivo fog ejecutará procesos de agregación de datos de múltiples sensores y aplicará algoritmos más complejos que no pueden realizarse en los dispositivos edge, mejorando la precisión de las lecturas y el análisis de tendencias en los niveles de glucosa.

4. **Transmisión y Almacenamiento de Datos:**
   - **Optimización de la Transmisión:**
     - Los datos preprocesados se transmitirán de manera eficiente a la nube o a un servidor centralizado solo cuando sea necesario, asegurando que se envíen únicamente los datos relevantes para optimizar el uso de ancho de banda y almacenamiento.  

5. **Monitoreo y Control Remoto:**
   - Los usuarios podrán monitorear los niveles de glucosa de manera remota a través de una aplicación web o app móvil conectada a la nube.
   - El sistema también podrá generar alertas automáticas para niveles de glucosa críticos, notificando a los usuarios o cuidadores en tiempo real para intervención inmediata.

---

### Resultados Esperados:

1. **Capacidad de Implementación de Edge y Fog Computing:**
   - Los estudiantes deben demostrar que son capaces de diseñar e implementar una solución IoT que utilice edge y fog computing para procesar datos localmente y tomar decisiones en tiempo real.

2. **Desarrollo de Microservicios para IoT:**
   - Implementación de microservicios que operan autónomamente en los dispositivos edge para gestionar tareas complejas como el control de riego basado en las condiciones ambientales.

3. **Gestión Avanzada de Datos en el Edge:**
   - Aplicación de técnicas de filtrado y normalización de datos, asegurando que solo la información relevante y procesada sea transmitida a la nube.

---

### Tecnologías Utilizadas:

- **Microcontroladores:** ESP32-Wroom.
- **Sensores:** Sensores de glucosa no invasivos.
- **Frameworks:** C++ para el desarrollo de hardware y para la gestión de tareas en tiempo real.
- **Herramientas de Desarrollo:** Visual Studio Code con PlatformIO
- **Fog Computing:** Microcomputadoras, microservidores, etc.

---

### Desarrollo de las Semanas:

#### Semana 15 (12/08 - 18/08): Introducción a Fog y Edge Computing

**Objetivo Principal:** Comenzar con la implementación de las bases del sistema IoT, enfocándose en la configuración del entorno y la comprensión de las estrategias para distribuir la carga computacional entre el edge y el fog.

- **Lunes (12/08):**
  - **Tema:** Introducción a Fog y Edge Computing.
  - **Actividades:**
    - Explicación de los conceptos básicos de Fog y Edge Computing.
    - Configuración del entorno de desarrollo con Visual Studio Code y PlatformIO.
    - Exploración de casos de uso en IoT que requieren procesamiento en el edge.

- **Miércoles (14/08):**
  - **Tema:** Implementación inicial en dispositivos Edge.
  - **Actividades:**
    - Comienzo del desarrollo de microservicios básicos en el ESP32-Wroom.
    - Configuración de sensores (humedad, temperatura, luz) y prueba de recolección de datos.
    - **Tarea:** Continuar el desarrollo en casa, implementando la lógica básica de recolección de datos y toma de decisiones simple (por ejemplo, activar riego si la humedad es baja).

**Entrega de la Semana:**
- Entorno configurado.
- Microservicios básicos funcionando en los dispositivos edge, recolectando y procesando datos simples.

---

#### Semana 16 (19/08 - 25/08): Microservicios en Dispositivos Edge

**Objetivo Principal:** Desarrollar microservicios más complejos que funcionen de manera autónoma en los dispositivos edge y conecten con la arquitectura de fog computing.

- **Lunes (19/08):**
  - **Tema:** Desarrollo de Microservicios en Edge.
  - **Actividades:**
    - Implementación de lógicas de filtrado de datos en el edge.
    - Optimización de la recolección y procesamiento de datos para mejorar la eficiencia.
    - Conexión entre diferentes nodos edge (ESP32-Wroom) para compartir y comparar datos recolectados.

- **Miércoles (21/08):**
  - **Tema:** Integración con Fog Computing.
  - **Actividades:**
    - Configuración de un nodo fog (puede ser un microcontrolador más robusto o un mini-servidor) para gestionar los datos recolectados por los nodos edge.
    - Desarrollo de APIs simples para permitir la comunicación entre los nodos edge y el fog.
    - **Tarea:** Optimizar la comunicación y asegurar que los datos procesados en el edge se transmitan correctamente al fog.

**Entrega de la Semana:**
- Microservicios más avanzados en los dispositivos edge.
- Nodo fog configurado y conectado con los dispositivos edge.
- Comunicación básica establecida entre edge y fog.

---

#### Semana 17 (26/08 - 01/09): Controladores Fog y API para la Gestión de Datos

**Objetivo Principal:** Finalizar el sistema integrando todas las partes y optimizando el procesamiento y la transmisión de datos. Preparar el sistema para su conexión con la capa de almacenamiento.

- **Lunes (26/08):**
  - **Tema:** Desarrollo de Controladores Fog y Lógicas de Filtrado.
  - **Actividades:**
    - Implementación de controladores fog que gestionen el procesamiento avanzado de datos (agregación, filtrado avanzado).
    - Optimización de la lógica de filtrado y normalización de datos en el edge para asegurar que solo los datos relevantes se envíen al fog.
    - Desarrollo de APIs para integrar y facilitar la transmisión de datos a la capa de almacenamiento o la nube.

- **Miércoles (28/08):**
  - **Tema:** Integración Final y Optimización del Sistema.
  - **Actividades:**
    - Realización de pruebas integradas para asegurar que todos los componentes (edge, fog, APIs) funcionen en conjunto sin problemas.
    - Depuración y mejora de la eficiencia del sistema.
    - **Preparación para la siguiente unidad:** Trabajar en la conexión del sistema con la capa de almacenamiento y procesamiento en la nube.
    - **Tarea:** Documentar el proyecto hasta el punto alcanzado y preparar una presentación del avance.

**Entrega de la Semana:**
- Sistema IoT completamente funcional con nodos edge y fog operativos.
- Controladores fog y APIs implementados y probados.
- Preparación para la siguiente etapa del proyecto (integración con la nube).

---

Este README.md proporciona una estructura clara y detallada para guiar a los estudiantes a través del desarrollo del proyecto, asegurando que comprendan las interacciones entre las distintas capas del sistema IoT, desde la percepción de datos en el edge, pasando por el procesamiento en el fog, hasta la transmisión y almacenamiento en la nube.









