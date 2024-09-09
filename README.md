[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/YwamQM3c)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=15533872&assignment_repo_type=AssignmentRepo)

![Caratula](/E%20Recursos/caratulaPI.png)
# Proyecto Integrador I 

## Instituto: ISPC  
**Carrera:** [Tecnicatura Superior en Telecomunicaciones](https://www.ispc.edu.ar/tecnicatura-superior-en-telecomunicaciones/)  
**Materia:** Proyecto Integrador I  
**Docente:** Cristian Gonzalo Vera

## Grupo: OPALO <img src="https://stardewvalleywiki.com/mediawiki/images/3/3c/Opal.png"  width="10%" height="100%">
**Integrantes:**
- Vittorio Durgutti ([GitHub](https://github.com/vittoriodurigutti))
- Luciano Lujan ([GitHub](https://github.com/lucianoilujan))
- Rodolfo Paz ([GitHub](https://github.com/Domi74))
- Jose Marquez ([GitHub](https://github.com/marquezjose))
- Joaquin Garzon ([GitHub](https://github.com/Joacogarzonn))
- Lisandro Juncos ([GitHub](https://github.com/Lisandro-05))
- Nahuel Velez ([GitHub](https://github.com/Lucasmurua19))
- Marcos Bordon Rios ([GitHub](https://github.com/Marcos-BR-03))
- Tiziano Paez ([GitHub](https://github.com/tpaez))

---

## Capa de Preprocesamiento 

### Sistema IoT para un dispositivo Medidor de Glucosa

### Descripción del Proyecto:
El proyecto consiste en el desarrollo de un medidor de glucosa IoT que utiliza un microcontrolador ESP32, un sensor óptico CNY 70 y un panel táctil para el encendido y control del dispositivo. Este medidor será capaz de capturar y procesar los niveles de glucosa en sangre, y enviar la información a una plataforma en la nube para su almacenamiento y análisis. El objetivo es proporcionar un dispositivo compacto, fácil de usar y conectado, que permita a los usuarios monitorear sus niveles de glucosa en tiempo real y acceder a sus datos desde cualquier lugar.

---

### Componentes del Proyecto:

Componentes Principales
1.	**Microcontrolador ESP32**  

    -	**Descripción:** El ESP32 es un microcontrolador de alto rendimiento con capacidades Wi-Fi y Bluetooth integradas. Es el cerebro del sistema, responsable de procesar los datos del sensor, controlar la interfaz de usuario, y manejar la comunicación con la nube.  

    -	Función:  
        	Recepción de datos del sensor CNY 70.  
        	Procesamiento de los datos de glucosa.  
        	Envío de los datos procesados a un servidor en la nube.  
        	Control del encendido del dispositivo a través del panel táctil.  
  
2.	**Sensor Óptico CNY 70**  

    -	**Descripción:** El CNY 70 es un sensor reflectivo infrarrojo que se utiliza para detectar la concentración de glucosa en una muestra de sangre. Funciona emitiendo luz infrarroja y midiendo la cantidad de luz reflejada, la cual varía según la concentración de glucosa.  

      -	Función:  
	Detección de los niveles de glucosa en sangre.  
	Generación de una señal analógica que es enviada al ESP32 para su procesamiento.  

3.	**Panel Táctil**  

    -	**Descripción:** Un panel táctil capacitivo que permite a los usuarios encender y controlar el dispositivo de manera intuitiva y sencilla.  

    -	Función:  
	Encendido del dispositivo al detectar la interacción del usuario.  
	Posible interacción adicional para seleccionar modos de operación o visualizar resultados.  

4.	**Pantalla LCD (Opcional)**  

    -	**Descripción:** Una pequeña pantalla LCD podría ser utilizada para mostrar los resultados de la medición de glucosa y el estado del dispositivo.  

    -	Función:  
	Visualización en tiempo real de los niveles de glucosa.  
	Visualización de mensajes de estado o alertas.  

5.	**Conectividad Wi-Fi**  

    -	**Descripción:** La capacidad Wi-Fi del ESP32 permite que el dispositivo se conecte a internet y envíe los datos de glucosa a una plataforma en la nube.  

    -	Función:  
        	Sincronización automática de los datos con una base de datos en la nube.  
        	Posibilidad de enviar alertas al teléfono móvil del usuario en caso de niveles de glucosa fuera de rango.  

6.	**Fuente de Alimentación**

    -	**Descripción:** El dispositivo será alimentado por una batería recargable, con posibilidad de recarga mediante un puerto USB.  

    -	Función:  
	Proveer energía al ESP32, sensor CNY 70, panel táctil y otros componentes del dispositivo.  
	Posibilidad de integrar un indicador de nivel de batería en la interfaz del dispositivo.  


---

### Resultados Esperados:

1.	**Mediciones Precisas y Confiables:**  
	El prototipo proporcionará mediciones precisas de los niveles de glucosa en sangre, con un margen de error mínimo, gracias al preprocesamiento de datos que incluye filtrado, calibración, y detección de anomalías.  


2.	**Monitoreo en Tiempo Real:**  
	El dispositivo permitirá a los usuarios obtener lecturas en tiempo real de sus niveles de glucosa, con la posibilidad de visualizar los resultados instantáneamente en una pantalla o a través de una aplicación móvil conectada a la nube.  

3.	**Conectividad y Acceso Remoto:**  
	Los datos de glucosa procesados serán enviados a una plataforma en la nube, permitiendo a los usuarios y a sus médicos acceder a un historial completo de mediciones desde cualquier lugar, facilitando un mejor control y seguimiento de la salud.  

4.	**Interfaz de Usuario Intuitiva:**  
o	El panel táctil permitirá a los usuarios encender el dispositivo y posiblemente seleccionar diferentes modos de operación de manera sencilla, mejorando la experiencia de uso.  

5.	**Alerta y Notificación:**   
	En caso de detectar niveles de glucosa fuera de los rangos normales, el dispositivo enviará alertas instantáneas al usuario o a su médico, permitiendo una respuesta rápida ante situaciones potencialmente peligrosas.  

6.	**Optimización del Uso de Energía:**  
	El dispositivo estará diseñado para ser eficiente en términos de consumo de energía, con opciones de apagado automático y un sistema de encendido mediante el panel táctil, prolongando la vida útil de la batería.  

7.	**Base para Desarrollo Futuro:**  
	El prototipo servirá como una base sólida para futuros desarrollos, permitiendo la integración de funcionalidades adicionales, como análisis predictivo, conexión con otros dispositivos médicos, o personalización según las necesidades del usuario.

---

### Tecnologías Utilizadas:

- **Microcontroladores:** [ESP32-Wroom](https://www.espressif.com/en/products/modules/esp32)
- **Sensores:** [CNY-70](../capa-de-preprocesamiento-grupo-opalo/B%20investigacion/Datasheet-CNY70.PDF)  
- **Sensor touch.**
- **Frameworks:** C++ para el desarrollo de hardware y para la gestión de tareas en tiempo real.
- **Herramientas de Desarrollo:** Visual Studio Code con PlatformIO
- **Fog Computing:** Microcomputadoras, microservidores, etc.

---

### Diagrama de conexión
![Diagrama](/E%20Recursos/Diagrama-de-conexion.png)
---









