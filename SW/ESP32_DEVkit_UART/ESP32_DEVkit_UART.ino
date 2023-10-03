/*
* Example code for ESP32-LPkit evaluation board made by laskakit.cz https://www.laskakit.cz/laskakit-esp32-devkit/
* Firmware sends message through serial com port (UART)
* "laskakit.cz" 
* "ESP32 LP-kit"
* The message is sent every second
*
* Created by (c) laskakit.cz 2023
*
* Libraries:
* -
*/
 
void setup() {
  Serial.begin(115200);
  while (!Serial) 
  {
    ; // waiting for serial com port
  }
}
 
void loop() {
  Serial.println("laskakit.cz");
  Serial.println("ESP32-DEVKit");
  delay(1000);
}
