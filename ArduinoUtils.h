#pragma once
#include <Arduino.h>

// Faster analog sampling: http://yaab-arduino.blogspot.com/2015/02/fast-sampling-from-analog-input.html
//                    and: https://forum.arduino.cc/index.php?topic=6549.0
// Defines for setting and clearing register bits
#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

class ArduinoUtils {
    public:
        // Set analog input prescale to 16 for fasting sampling
        static void enableFastAnalogSampling();
};