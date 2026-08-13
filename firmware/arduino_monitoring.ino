/*
 * Hybrid Thermal & Vibrational Energy Harvesting
 * Arduino monitoring prototype
 *
 * Reads a conditioned battery/output voltage through a voltage sensor
 * and displays the measured value on a 16x2 LCD.
 *
 * IMPORTANT:
 * The voltage divider/sensor interface must be designed so the Arduino
 * analog input never exceeds the board's ADC input rating.
 */

#include <LiquidCrystal.h>

const int VOLTAGE_SENSOR_PIN = A0;

// Example LCD wiring: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const float ADC_REFERENCE = 5.0;
const int ADC_MAX = 1023;

// Replace with the actual calibrated sensor/divider ratio used in hardware.
const float SENSOR_RATIO = 5.0;

float readVoltage() {
  int raw = analogRead(VOLTAGE_SENSOR_PIN);
  float sensorVoltage = (raw * ADC_REFERENCE) / ADC_MAX;
  return sensorVoltage * SENSOR_RATIO;
}

void setup() {
  lcd.begin(16, 2);
  lcd.print("Energy Harvest");
  delay(1500);
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  float voltage = readVoltage();

  lcd.setCursor(0, 0);
  lcd.print("Output: ");
  lcd.print(voltage, 2);
  lcd.print(" V   ");

  lcd.setCursor(0, 1);
  if (voltage >= 12.0) {
    lcd.print("Battery/Output OK");
  } else {
    lcd.print("Harvesting...   ");
  }

  Serial.print("Measured voltage: ");
  Serial.print(voltage, 2);
  Serial.println(" V");

  delay(500);
}
