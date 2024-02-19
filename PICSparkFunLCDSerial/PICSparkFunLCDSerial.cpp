//Command Set source: https://learn.sparkfun.com/tutorials/pic-based-serial-enabled-character-lcd-hookup-guide

#include "PICSparkFunLCDSerial.h"

PICSparkFunLCDSerial::PICSparkFunLCDSerial() { }

void PICSparkFunLCDSerial::begin() {
    Serial1.begin(9600);
    delay(1000);
}

void PICSparkFunLCDSerial::clear() {
    Serial1.write(0xFE); //control character
    Serial1.write(0x01); //clear screen, reset cursor to position 0
    delay(100);
}

void PICSparkFunLCDSerial::setCursor(int ros, int col) {
    int position = row * 40 +col;
    Serial1.write(0xFE); //control character
    Serial1.write(0x80 + position); //set cursor
    delay(100);
}

void PICSparkFunLCDSerial::print(const char* text) {
    while (*text) {
        Serial1.write(*text);
        text++;
        delay(10);
    }  
}

