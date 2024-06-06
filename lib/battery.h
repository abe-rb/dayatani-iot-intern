/*
 ***************************************************************
 * Battery Driver
 * float battery_read_voltage() - read the adc for the battery voltage value
 * int battery_convert_to_percentage(float voltage) - 
 *                     return the battery percentage based on the voltage value        
 * MINIMUM_VOLT - voltage value of a discharged LiPo 18650 battery
 * MAXIMUM_VOLT - voltage value of a maximum charged LiPo 18650 battery
 *************************************************************** 
 */
#ifndef BATTERY_H
#define BATTERY_H
#define MINIMUM_VOLT 3.0
#define MAXIMUM_VOLT 4.2
float battery_read_voltage();
int battery_convert_to_percentage(float voltage);
#endif