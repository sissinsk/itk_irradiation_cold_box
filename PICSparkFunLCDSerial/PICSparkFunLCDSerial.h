//PICSparkFunlCDSerial.h

#ifndef PICSparkFunLCDSerial_h
#define PICSparkFunLCDSerial_h

class PICSparkFunLCDSerial {
public:
    PICSparkFunLCDSerial();

    void begin();
    void clear();
    void setCursor();
    void print(const char* text);

private:
   
};

#endif