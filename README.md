# ESP32 DEVkit
Are you looking for a combination of a low-power kit with ESP32 with a very simple programming? We have designed a new development kit just for you, which combines very low power consumption, an integrated programmer, LiPol charger, versatile uŠup connector for sensors. Thanks to the selection of suitable components, the consumption of the [ESP32-DEVkit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481) is only 9.5 uA in the deepest ESP32 sleep.

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/3.jpg)

As you can see in the picture above, the ESP32 DEVkit development kit includes a USB-C connector for battery charging and programming, a connector for the Lipol battery, a RESET and FLASH button, and GPIO pins on both sides of the board. 

What we're 100% sure you'll like is our connector, which we've named μŠup. It's small, yet durable, and you can't get the sensor re-polarized. It's just safe. With this connector, you can connect your development board to many more sensors and boards. Some of them we already have in stock, others we are working on. The connector is pin compatible with Adafruit Stemma and Sparkfun Qwiik.

For example [SHT40 (temperature/humidity)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (temperature, humidity, atmospheric pressure)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, temperature, humidity)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

ESP32-DEVkit includes voltage divider what is connected to IO34 (need to short solder bridge).

## Charging IC for Li-ion battery
The Li-ion battery is charged via a modern and universal USB-C connector, charging is controlled by the TP4054 chip. 
You can choose between 260mA and 400mA charging current. Just power the solder bridge on the BOTTOM side. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/1.jpg)

## Power consumption
The ESP32 LP kit consumption during sleep mode is only 9.5 uA (at 4.2V). This means that the entire board, powered only by the Li-ion battery with the programmer installed, consumes only 9.5uA. 

## Programming
Programming is very easy thanks to the built-in programmer, you connect the USB-C cable to the board, select the port where the programmer is connected in the Arduino IDE and upload your code by clicking on "Upload". Switch to 3.3V on the programmer!

The sample code can be found at https://github.com/LaskaKit/ESP32-DEVKit/tree/main/SW

You can purchase the ESP32-DEVkit at https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481
