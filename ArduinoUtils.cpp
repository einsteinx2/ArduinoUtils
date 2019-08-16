#include "ArduinoUtils.h"

void ArduinoUtils::enableFastAnalogSampling() {
    sbi(ADCSRA, ADPS2);
    cbi(ADCSRA, ADPS1);
    cbi(ADCSRA, ADPS0);
}