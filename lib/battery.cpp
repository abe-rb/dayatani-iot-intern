#include <Arduino.h>
#include "battery.h"

int analogPin = A0;         // ADC Pin
float adcValue;

/* Read the adc pin to get the battery voltage */      
float battery_read_voltage() {
    adcValue = analogRead(analogPin);

    return (adcValue / 1023.0) * MAXIMUM_VOLT;  // scale the adc value with the maximum voltage
}

/* Convert the battery voltage to its percentage value */
int battery_convert_to_percentage(float voltage) {
    if (voltage <= MINIMUM_VOLT) {
        return 0;
    }

    /* scale the battery percentage based on the voltage value */
    float percentage = (voltage - MINIMUM_VOLT) * 100 / (MAXIMUM_VOLT-MINIMUM_VOLT);
    
    return (int)percentage;
}