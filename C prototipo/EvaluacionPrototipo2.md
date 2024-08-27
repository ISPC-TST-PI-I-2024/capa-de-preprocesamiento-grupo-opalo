# Evaluacion de sensores o dispositivos asociados para desarrollo de prototipo nro 2.

Con foco de contiunar con el prototipado del dispositivo, se plantean las siguiente ideas:
- Colocacion de un sensor de contacto mediante el cual se de incio a la lectura, y con eso a todo el proceso. Reemplazando el switch o pulsador actualmente conectado.
- Posibilidad de pantalla o visor que indique o permita interactuar demanera directa con el dispositivo.
- Desarrollar reglas de lectura y comparacion de valores en relacion con un dispositivo lector de glucemia estandar.


---------------------------------------------------

## Comparativa de Sensores para Detección de Contacto Humano

### Sensor TTP223

#### Ventajas
- **Fácil de usar**: Simple de implementar en proyectos de detección de toques.
- **Bajo costo**: Accesible y ampliamente disponible.
- **Configuración mínima**: No requiere calibración compleja.
- **Compacto**: Tamaño pequeño que facilita la integración en diversos proyectos.

#### Desventajas
- **Limitado a toques momentáneos**: No es ideal para detección de contacto continuo.
- **Sensibilidad variable**: La sensibilidad puede cambiar dependiendo del entorno y la humedad.
- **No detecta presión**: Solo detecta la presencia de un toque, no la fuerza o presión aplicada.

### Sensor de Impedancia de la Piel

#### Ventajas
- **Detección continua**: Ideal para detectar contacto continuo con la piel.
- **Alta sensibilidad**: Capaz de detectar pequeños cambios en la impedancia de la piel.
- **Precisión**: Proporciona datos precisos basados en la resistencia de la piel.

#### Desventajas
- **Afectado por humedad**: La sudoración o alta humedad pueden alterar las lecturas.
- **Requiere calibración**: Necesita ajustar el umbral de detección para cada individuo o entorno.
- **Montaje más complejo**: Puede requerir electrodos específicos para una buena medición.

### Sensor de Detección Continua de Contacto

#### Ventajas
- **Detección sin contacto directo**: Capaz de detectar la presencia de un cuerpo cercano sin contacto físico directo.
- **Versatilidad**: Puede ser utilizado en una amplia variedad de aplicaciones donde el contacto constante es necesario.
- **Estabilidad**: Menos afectado por la humedad y otras condiciones ambientales.

#### Desventajas
- **Configuración y calibración complejas**: Requiere un ajuste preciso para garantizar la detección continua.
- **Costo más alto**: Suele ser más caro que los sensores básicos como el TTP223.
- **Consumo de energía**: Puede consumir más energía en comparación con sensores más simples.

---------------------------------------------------

## Comparativa de Pantallas para Visualización de Gráficos y Alarmas

### 1. Pantalla OLED (1.3" - 128x64)

#### Ventajas
- **Alta nitidez**: Los píxeles OLED son autoiluminados, proporcionando un excelente contraste y claridad, incluso con fuentes pequeñas.
- **Bajo consumo energético**: Ideal para proyectos alimentados por baterías.
- **Compacta**: Tamaño reducido, fácil de integrar en dispositivos portátiles.
- **Tiempo de respuesta rápido**: Perfecto para actualizar gráficos en tiempo real.

#### Desventajas
- **Tamaño limitado**: La pantalla pequeña puede dificultar la visualización detallada de gráficos complejos.
- **Resolución limitada**: La resolución de 128x64 puede no ser suficiente para gráficos detallados.
- **Vida útil**: Los píxeles OLED pueden degradarse con el tiempo, especialmente si se muestran gráficos estáticos constantemente.

### 2. Pantalla TFT LCD (2.4" - 240x320)

#### Ventajas
- **Mayor resolución**: Con 240x320 píxeles, proporciona suficiente detalle para gráficos y texto.
- **Pantalla a color**: Capacidad de mostrar gráficos en color, lo que mejora la visualización y diferenciación de datos.
- **Tamaño intermedio**: Lo suficientemente grande como para mostrar gráficos detallados y pequeñas representaciones visuales.

#### Desventajas
- **Consumo energético**: Consume más energía que una pantalla OLED, lo que puede ser un problema en dispositivos alimentados por baterías.
- **Ángulos de visión**: Los ángulos de visión pueden ser limitados en algunas pantallas TFT.
- **Espesor**: Las pantallas TFT pueden ser más gruesas que las OLED, lo que puede afectar la portabilidad del dispositivo.

### 3. Pantalla e-Paper (2.9" - 296x128)

#### Ventajas
- **Excelente legibilidad a la luz solar**: La tecnología de tinta electrónica es ideal para exteriores.
- **Bajo consumo en modo estático**: Una vez que se actualiza la pantalla, no consume energía hasta la próxima actualización, ideal para datos que no necesitan cambiar constantemente.
- **Tamaño amplio**: Proporciona un área grande para gráficos, ideal para mostrar información detallada y alertas.

#### Desventajas
- **Tiempo de respuesta lento**: La actualización de la pantalla es más lenta que en OLED o TFT, lo que puede no ser ideal para gráficos en tiempo real.
- **No es a color**: La mayoría de las pantallas e-Paper son monocromáticas, aunque algunas versiones pueden mostrar unos pocos colores.
- **Costo más alto**: Las pantallas e-Paper pueden ser más caras que las OLED y TFT, especialmente las de mayor tamaño.

