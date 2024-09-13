# Evaluación de Uso del Dispositivo para Medir Diferentes Parámetros Biológicos

____________________________________

## Propuesta

El objetivo del presente informe es evaluar la posibilidad de utilizar el sensor **CNY70** no solo para la medición de **glucosa en sangre**, sino también para medir otros parámetros biológicos, como el **ritmo cardíaco** y otros relacionados con la salud. Se analizará la viabilidad técnica del CNY70 en estas aplicaciones y, en caso de limitaciones, se evaluarán sensores alternativos que permitan la medición precisa de diversos parámetros, extendiendo así la capacidad del proyecto.

____________________________________

## Análisis de la Viabilidad del Sensor CNY70

### 1. **Funcionamiento del CNY70**
El CNY70 es un sensor infrarrojo sencillo, diseñado para detectar la **reflexión de luz** en superficies cercanas. Está compuesto por un **emisor de luz infrarroja** y un **fototransistor** que mide la cantidad de luz reflejada.

### 2. **Limitaciones del CNY70 para Parámetros Biológicos**
El sensor CNY70 no está diseñado para medir los parámetros biológicos comunes que se encuentran en dispositivos como relojes inteligentes o muñequeras de salud. Entre los parámetros que no puede medir, encontramos:
- **Frecuencia cardíaca (FC)**: El CNY70 no tiene la precisión ni la capacidad de detectar cambios sutiles en el flujo sanguíneo como lo hacen los sensores de fotopletismografía (PPG).
- **Saturación de oxígeno (SpO2)**: Para medir SpO2 se necesitan dos longitudes de onda (roja e infrarroja), algo que el CNY70 no puede ofrecer.
- **Ritmo de sueño, HRV, calorías quemadas, contador de pasos**: Estos parámetros requieren sensores de movimiento (acelerómetros) y sensores ópticos más avanzados que midan con precisión.
- **Glucosa en sangre**: Aunque el CNY70 opera en el infrarrojo, no está optimizado para medir la absorción de glucosa, ya que no emite ni detecta las longitudes de onda necesarias para la espectroscopía de glucosa.

### 3. **Especificaciones de Sensores Requeridos para Medición de Glucosa**
Para medir la glucosa en sangre de forma no invasiva utilizando infrarrojos, se necesitan las siguientes características:
- **Longitudes de onda**: El rango de **900 nm a 2500 nm** es esencial para detectar los picos de absorción de glucosa.
- **Detectores sensibles**: Los **fotodetectores InGaAs** son ideales, ya que tienen alta sensibilidad en el rango NIR.
- **Emisores multiespectrales**: Para medir la absorción de glucosa de manera precisa, es necesario utilizar emisores que cubran múltiples longitudes de onda.

____________________________________

## Sensores Alternativos Recomendados

Para cumplir con las demandas de medir diversos parámetros biológicos de manera precisa, se recomiendan los siguientes tipos de sensores:

### 1. **Emisores Infrarrojos (LEDs y Láseres)**
   - **Osram SFH 4715A** (940 nm): Adecuado para aplicaciones básicas en infrarrojo cercano.
   - **Thorlabs LED1300E** (1300 nm): Para mediciones más especializadas, en el rango de absorción de glucosa.
   - **Roithner 1650D-01** (1650 nm): Específico para uno de los picos de absorción de glucosa.

### 2. **Fotodetectores InGaAs**
   - **Thorlabs FGA21**: Detecta luz en el rango de 800 nm a 1700 nm.
   - **Hamamatsu G8370-03**: Fotodiodo con alta sensibilidad en el rango NIR (900 nm - 1700 nm).

### 3. **Espectrómetros NIR Portátiles**
   - **Ocean Insight NIRQuest 512**: Cubre longitudes de onda desde 900 nm hasta 2500 nm.
   - **Si-Ware NeoSpectra**: Espectrómetro miniaturizado para análisis de espectros en tiempo real.

### 4. **Filtros Ópticos**
   - **Thorlabs FESH1000**: Filtro de paso de banda para aislar las longitudes de onda de interés y minimizar interferencias.

____________________________________

### Mejor Opción para Medir el Ritmo Cardíaco

Para sumar la capacidad de medir el **ritmo cardíaco** de manera económica y con fácil acceso, la mejor opción es utilizar un **sensor de fotopletismografía (PPG)** basado en luz infrarroja o verde. Estos sensores, como el **MAX30102** o el **MAX30100**, son módulos compactos y asequibles que combinan un LED emisor y un fotodetector para detectar cambios en el volumen sanguíneo en los vasos capilares del dedo o la muñeca, lo que permite determinar la frecuencia cardíaca. Estos módulos están ampliamente disponibles en el mercado, son fáciles de integrar con microcontroladores como el ESP32, y ofrecen una buena precisión para aplicaciones personales de monitoreo de salud.

____________________________________

## Conclusión

El **sensor CNY70**, aunque útil para detección de proximidad o reflejo en superficies, no es adecuado para medir parámetros biológicos como la **glucosa en sangre**, la **frecuencia cardíaca** o la **saturación de oxígeno**. Para realizar estas mediciones, es necesario recurrir a sensores más avanzados como **emisores multiespectrales**, **fotodetectores InGaAs** y **espectrómetros NIR**. 

A fines practicos, y educativos, continuaremos el prototipado utilizando sensor **CNY70** y evaluaremos la posiilidad de sumar al prototipo el sensor **MAX30102/0** a fin de extender las capacidades del mismo. 

La principal limitacion para disponer de los sensores mencionados en puntos anteriores radica en disponibilidad y/o precio. A futuro la incorporación de estos sensores alternativos para extender la capacidad del proyecto, permitiendo la medición precisa de parámetros biológicos relevantes, especialmente la **glucosa en sangre** mediante **espectroscopía NIR**, es el desitno logico. 
