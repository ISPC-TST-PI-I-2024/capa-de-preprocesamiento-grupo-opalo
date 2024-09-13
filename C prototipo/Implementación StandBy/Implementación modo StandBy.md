# Implementación de modo StandBy para el sistema
### Modos de ahorro de energía del ESP32:

1. **Modo Light Sleep:**

    - **Descripción:** Permite que el CPU se detenga y apague algunos periféricos, pero mantiene la RAM y el estado del sistema. La conexión Wi-Fi o Bluetooth puede mantenerse activa en este modo, aunque a menor frecuencia.  
    Este modo consume alrededor de 0.8 mA.

    - **Código para entrar en Light Sleep**
    ```
    esp_sleep_enable_timer_wakeup(1000000);  // Despierta después de 1 segundo

    esp_light_sleep_start();  // Entra en Light Sleep
    ```

2. **Modo Deep Sleep:**

    - **Descripción:** Apaga la mayor parte de los componentes del ESP32, incluyendo el CPU y el Wi-Fi, pero puede conservar datos en la RTC RAM. El ESP32 se "despierta" cuando un evento específico ocurre, como una interrupción o un temporizador.  
    Este modo consume entre 10 y 150 µA.

    - **Código para entrar en Deep Sleep**
     ```
     esp_sleep_enable_timer_wakeup(1000000);  // Despierta después de 1 segundo

    esp_deep_sleep_start();  // Entra en Deep Sleep
    ```
3. **Modo hibernación:**

    - **Descripción:** Es similar al Deep Sleep, pero aún más eficiente en cuanto a energía, ya que apaga casi todos los componentes, incluidos los relojes. Solamente el temporizador de arranque o una señal externa puede "despertar" al ESP32.  
    Este modo consume entre 2,5 y 10 µA.

    - **Código para entrar en modo de hibernación**
    ```
    esp_sleep_enable_ext0_wakeup(GPIO_NUM_0, 1);  // Configura una señal externa para despertar
    
    esp_deep_sleep_start();  // Entra en modo Hibernation
    ```

### Implementación en el proyecto
El modo principal sería el **Light Sleep** para el día a día, el dispositivo se enciende cada **15 minutos** y realiza las mediciones correspondientes, luego vuelve al modo **Light Sleep** hasta la próxima medición y así sucesivamente.  
El segundo modo sería el de **Hibernación** que se debería activar al momento en que haya **3 mediciones seguidas** que den **"0"**. De este modo se sale fácilmente apretando un botón dedicado.

### Implementación en código
<a href="Codigo_implementacion_ejemplo.cpp">
    <img src=https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)>