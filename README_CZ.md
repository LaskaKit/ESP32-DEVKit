# ESP32 DEVkit
Hledáš kombinaci velmi úsporného vývojového kitu s ESP32 s naprosto jednoduchým programováním? Právě pro tebe jsme připravili nový vývojový kit, který práce kombinuje velmi nízkou spotřebu a integrovaný programátor. Díky výběru vhodných součátek je spotřeba [ESP32-DEVkit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481) v nejhlubším spánku ESP32 pouhých 9.5 uA. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/3.jpg)

Jak můžeš vidět na obrázku výše, vývojový kit ESO32 DEVkit obsahuje USB-C konektor pro nabíjení akumulátoru a programování, konektor pro Lipol akumulátor, tlačítko RESET a FLASH, a GPIO hřebínky po obou stranách desky. 

Co jsme si 100% jistí je, že se ti zalíbí náš konektor, který jsme nazvali μŠup. Je to malý, zároveň odolný a nemůže se ti stát, že bys čidlo přepóloval. Je prostě bezpečný. S tímto konektorem můžeš vývojovou desku připojit k další spoustě čidel a desek. Některé už máme skladem, na jiných pracujeme. Konektor je pinově kompatibilní s Adafruit Stemma a Sparkfun Qwiik.

Například [SHT40 (teplota/vlhkost)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (teplota, vlhkost, atmosférický tlak)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, teplota, vlhkost)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

ESP32-DEVkit obsahuje dělič napětí, který je připojen k IO34 (je třeba zkratovat pájecí můstek).

## Nabíjecí obvod akumulátoru
Li-ion akumulátor je nabíjen skrze moderní a univerzální USB-C konektor, nabíjení je řízeno čipem TP4054. 
Nabíjecí proud si můžeš vybrat mezi 260mA a 400mA. Stačí propájet pájecí most na BOTTOM straně. 

![ESP32-DEVkit](https://github.com/LaskaKit/ESP32-DEVKit/blob/main/img/1.jpg)

## Spotřeba
Spotřeba ESP32 LP kit během režimu spánku je pouhých 9.5 uA (při 4,2V). To znamená, že celá deska, napájena pouze z Li-ion akumulátoru s osazeným programátorem odebírá pouhých 9.5uA. 

## Programování
Programování je díky osazenému programátoru velmi jednoduché, připojíš USB-C kabel do desky, v Arduino IDE vybereš port, kam je programátor připojený a tvůj kód nahraješ kliknutím na “Nahrát”. Na programátoru přepni na 3.3V!

Vzorový kód nalezneš na https://github.com/LaskaKit/ESP32-DEVKit/tree/main/SW

ESP32-DEVkit si můžeš zakoupit na https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481
