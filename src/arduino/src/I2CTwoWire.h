//
// Created by Dr. Brandon Wiley on 11/12/25.
//
//
// Arduino TwoWire adapter for I2C interface
//

#ifndef FLUX_CPP_I2CTWOWIRE_H
#define FLUX_CPP_I2CTWOWIRE_H

#include "I2C.h"
#include <Wire.h>

class I2CTwoWire : public I2C {
  public:
    explicit I2CTwoWire(TwoWire& wire);
    ~I2CTwoWire() override = default;

    // Communication
    void beginTransmission(uint8_t address) override;
    uint8_t endTransmission() override;
    uint8_t endTransmission(bool sendStop) override;

    // Write operations
    size_t write(uint8_t data) override;
    size_t write(const uint8_t* data, size_t length) override;

    // Read operations
    uint8_t requestFrom(uint8_t address, uint8_t quantity) override;
    uint8_t requestFrom(uint8_t address, uint8_t quantity, bool sendStop) override;
    int available() override;
    int read() override;
    int peek() override;

  private:
    TwoWire& wire;
};

#endif //FLUX_CPP_I2CTWOWIRE_H