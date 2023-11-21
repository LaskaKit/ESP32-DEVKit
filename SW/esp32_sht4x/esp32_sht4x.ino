/*
* This example code is used for LaskaKit ESP32-DEVKit board https://www.laskakit.cz/laskakit-esp32-devkit/
* with our Temperature and Humidity SHT40 module https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/
* ESP32-DEVKit board 
reads temperature and humidity from SHT40 sensor 
* and sends every second through UART
* 
*
* Made by (c) laskakit.cz 2023
*
* Libraries: https://github.com/Sensirion/arduino-i2c-sht4x
* 
*/

#include <Arduino.h>
#include <SensirionI2CSht4x.h>
#include <Wire.h>

SensirionI2CSht4x sht4x;

void setup() {

  pinMode(2, OUTPUT);    // Set uSUP connector power transistor as output
  digitalWrite(2, HIGH); // Turn power ON uSUP connector
  delay(100);            // Delay so it has time to turn on

    Serial.begin(115200);
    while (!Serial) {
        delay(100);
    }

    Wire.begin();

    uint16_t error;
    char errorMessage[256];

    sht4x.begin(Wire);

    uint32_t serialNumber;
    error = sht4x.serialNumber(serialNumber);
    if (error) {
        Serial.print("Error trying to execute serialNumber(): ");
        errorToString(error, errorMessage, 256);
        Serial.println(errorMessage);
    } else {
        Serial.print("Serial Number: ");
        Serial.println(serialNumber);
    }
}

void loop() {
    uint16_t error;
    char errorMessage[256];

    delay(1000);

    float temperature;
    float humidity;
    error = sht4x.measureHighPrecision(temperature, humidity);
    if (error) {
        Serial.print("Error trying to execute measureHighPrecision(): ");
        errorToString(error, errorMessage, 256);
        Serial.println(errorMessage);
    } else {
        Serial.print("Temperature:");
        Serial.print(temperature);
        Serial.print("\t");
        Serial.print("Humidity:");
        Serial.println(humidity);
    }
}
