# ESP32 DEVkit Are you looking for a combination of a very economical development kit with ESP32 with absolutely simple programming? We have prepared a new development kit just for you, which combines very low power consumption and an integrated programmer. By selecting the right components, the power consumption of the [ESP32-DEVkit](https://www.laskakit.cz/laskakit-esp32-devkit/) in the ESP32's deepest sleep is only 9.5 uA. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/LaskaKit-ESP32-DEVKit_v2-1.jpg)

As you can see in the picture above, the LaskaKit ESP32 DEVkit comes equipped with a USB-C connector for battery charging and programming, a JST-PH-2 connector for a LiPo/LiIon battery, a user-programmable button, a RESET button, and GPIO headers on each side of the board. 

What we are 100% sure of is that you will like our connector, which we have dubbed "μŠup". 

It's small and durable at the same time and you can't switch the polarity of the sensor by mistake. It's just a safe and reliable method of connecting sensors or I/O devices. With this connector, you can connect the development board to whole host of devices. The connector is pin-compatible with Adafruit Stemma and Sparkfun Qwiik. Some examples of sensors we've designed are: [SHT40 (temperature/humidity)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (temperature, humidity, atmospheric pressure)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, temperature, humidity)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

The ESP32-DEVkit contains a voltage divider that is connected to the IO34 (a solder bridge on the back of the board must be shorted to enable it). 


## Charging circuitry

Battery charging is enabled by the TP4054 charging circuit, while a stable voltage of 3.3V for the microcontroller is provided by the RT9080-33 low-power voltage stabilizer. The CH9102F USB-UART converter allows easy programming and communication with a computer. 

## Other hardware 

Outside of what we have already mentioned, there is also a user-programmable button, reset button, and RGB LED (SK6812) on the board for signaling or user interface. The pin pitch is designed so that the board can be easily inserted into the solderless contact field, making prototyping and development much easier. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/LaskaKit-ESP32-DEVKit_v2-3.jpg)


## Power consumption 

The power consumption of the ESP32 DevKit during deep-sleep mode is only 12,7 µA (at 4.2V). This means that the entire board, powered only by a Li-ion battery with a programmer, consumes only 12,7 µA.


## Programming
Programming is trivial thanks to the CH9102F programmer. All you have to do is connect a USB-C cable to the board, select the correct port in Arduino IDE, and press "Upload".

Example programs can be found at: https://github.com/LaskaKit/ESP32-DEVKit/tree/main/SW

## Specifications

- Microcontroller: ESP32-WROOM-32 (16 MB Flash)
- Wireless connectivity: Wi-Fi 802.11 b/g/n, Bluetooth
- Power: USB-C, 5V, or 1S LiIon/LiPol battery
- Vin: 3,5–5,5 V
- Battery charging: Integrated TP4054 charging circuit
- Voltage regulators:
  - ESP32:  RT9080
  - Connected devices: RT9080, IO2 -> HIGH to enable
- USB-UART converter: CH9102F
- Deep sleep power consuption: ~12,7 µA (without peripherals)
- Device buses:
  - µŠup I2C: JST-SH 4 pin (SDA: IO21; SCL: IO22)
  - µŠup SPI: JST-SH 6 pin (CS: IO15; MOSI: IO13; SCK: IO14; MISO: IO12)
- LED: SK6812-EC20 (adressable RGB LED at IO4)
- Button: IO17 -> Pressed = LOW
- Battery connector: JST-PH 2-pin
- External antenna connector (IPEX version): IPEX1
- Pin spacing: compatible with solderless breadboards and prototype boards
- Dimensions: 65,5 × 25,5 × 7,5 mm
- Mass: ~9 g
