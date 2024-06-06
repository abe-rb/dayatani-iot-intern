#include "Arduino.h"
#include "battery.h"

float batteryVoltage;
int batteryPercentage;

void setup() {
    Serial.begin(9600);         // Set up the serial communication
}

/**
 * Main Program
 * Battery measurer
*/
void loop() {
    /* Get the battery percentage value */
    batteryVoltage = battery_read_voltage();
    batteryPercentage = battery_convert_to_percentage(batteryVoltage);

    /* Print the value through the serial */
    Serial.print("Battery percentage: ");
    Serial.print(batteryPercentage);
    Serial.println("%");

    delay(100);
}