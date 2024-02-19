//PICSparkFunlCDSerial.h

#ifndef PICSparkFunLCDSerial_h
#define PICSparkFunLCDSerial_h

class PICSparkFunLCDSerial {
public:
    PICSparkFunLCDSerial(int rxPin);

    void begin();
    void clear();
    void setCursor();
    void print(const char* text);

private:
   
};

PICSparkFunLCDSerial::PICSparkFunLCDSerial(/* args */) { }

PICSparkFunLCDSerial::~PICSparkFunLCDSerial() { }




#endif