#include <flux-arduino.h>
#include <Arduino.h>
#include <Wire.h>

void setup()
{
  Wire.begin();
  I2CTwoWire::begin(Wire);
}

void loop()
{
}