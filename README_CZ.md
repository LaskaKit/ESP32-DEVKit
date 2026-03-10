# ESP32 DEVkit
Hledáš kombinaci velmi úsporného vývojového kitu s ESP32 s naprosto jednoduchým programováním? Právě pro tebe jsme připravili nový vývojový kit, který práce kombinuje velmi nízkou spotřebu a integrovaný programátor. Díky výběru vhodných součátek je spotřeba [ESP32-DEVkit](https://www.laskakit.cz/laskakit-esp32-devkit/) v nejhlubším spánku ESP32 pouhých 9.5 uA. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/LaskaKit-ESP32-DEVKit_v2-1.jpg)

Jak můžeš vidět na obrázku výše, vývojový kit ESO32 DEVkit obsahuje USB-C konektor pro nabíjení akumulátoru a programování, konektor pro Lipol akumulátor, uživatelské tlačitko, tlačítko RESET, a GPIO hřebínky po obou stranách desky. 

Co jsme si 100% jistí je, že se ti zalíbí náš konektor, který jsme nazvali μŠup. Je to malý, zároveň odolný a nemůže se ti stát, že bys čidlo přepóloval. Je prostě bezpečný. S tímto konektorem můžeš vývojovou desku připojit k další spoustě čidel a desek. Některé už máme skladem, na jiných pracujeme. Konektor je pinově kompatibilní s Adafruit Stemma a Sparkfun Qwiik.

Například [SHT40 (teplota/vlhkost)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (teplota, vlhkost, atmosférický tlak)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, teplota, vlhkost)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

ESP32-DEVkit obsahuje dělič napětí, který je připojen k IO34 (je třeba zkratovat pájecí můstek na zadní straně desky).

## Nabíjecí obvod
Nabíjení baterie zajišťuje nabíjecí obvod TP4054, zatímco stabilní napětí 3,3 V pro mikrokontroler poskytuje nízkopříkonový stabilizátor RT9080-33. USB-UART převodník CH9102F umožňuje snadné programování a komunikaci s počítačem. 

## Další hardware
Na desce je také uživatelské tlačítko, reset tlačítko a RGB LED (SK6812) pro signalizaci nebo uživatelské rozhraní. Rozteč pinů je navržena tak, aby bylo možné desku snadno zasunout do nepájivého kontaktního pole, což výrazně usnadňuje prototypování a vývoj.

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/LaskaKit-ESP32-DEVKit_v2-3.jpg)

## Spotřeba
Spotřeba ESP32 LP kit během režimu spánku je pouhých 12,7 µA (při 4,2V). To znamená, že celá deska, napájena pouze z Li-ion akumulátoru s osazeným programátorem odebírá pouhých 12,7 µA. 

## Programování
Programování je díky osazenému programátoru velmi jednoduché, připojíš USB-C kabel do desky, v Arduino IDE vybereš port, kam je programátor připojený a tvůj kód nahraješ kliknutím na “Nahrát”.

Vzorový kód nalezneš na https://github.com/LaskaKit/ESP32-DEVKit/tree/main/SW

## Specifikace

- Mikrokontroler: ESP32-WROOM-32 (16 MB Flash)
- Bezdrátová konektivita: Wi-Fi 802.11 b/g/n, Bluetooth
- Napájení: přes USB-C nebo Li-Ion akumulátor (1 článek)
- Napájecí napětí: 3,5–5,5 V
- Nabíjení baterie: integrovaná Li-Ion nabíječka TP4054
- Stabilizátory napětí:
  - ESP:  RT9080
  - Pereferie: RT9080, IO2 -> HIGH pro zapnutí
- USB-UART převodník: CH9102F
- Odběr proudu v deep-sleep režimu: přibližně 12,7 µA (bez připojených periferií)
- Sběrnice senzorů:
  - µŠup I2C: JST-SH 4 pin (SDA: IO21; SCL: IO22)
  - µŠup SPI: JST-SH 6 pin (CS: IO15; MOSI: IO13; SCK: IO14; MISO: IO12)
- LED: SK6812-EC20 (adresovatelná RGB LED na IO4)
- Tlačítko: IO17 -> Stisknuto = LOW
- Konektor pro baterii: JST-PH 2-pin
- Konektor pro externí anténu (u IPEX verze): IPEX1
- Rozteč pinů: kompatibilní s nepájivým kontaktním polem
- Rozměry: 65,5 × 25,5 × 7,5 mm
- Hmotnost: přibližně 9 g

ESP32-DEVkit si můžeš zakoupit na https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481
