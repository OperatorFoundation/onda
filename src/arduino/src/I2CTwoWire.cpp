//
// Created by Dr. Brandon Wiley on 11/12/25.
//
//
// Arduino TwoWire adapter for I2C interface
//

#include "I2CTwoWire.h"

I2CTwoWire::I2CTwoWire(TwoWire& wire) : wire(wire) {}

// Communication
void I2CTwoWire::beginTransmission(uint8_t address) {
  wire.beginTransmission(address);
}

uint8_t I2CTwoWire::endTransmission() {
  return wire.endTransmission();
}

uint8_t I2CTwoWire::endTransmission(bool sendStop) {
  return wire.endTransmission(sendStop);
}

// Write operations
size_t I2CTwoWire::write(uint8_t data) {
  return wire.write(data);
}

size_t I2CTwoWire::write(const uint8_t* data, size_t length) {
  return wire.write(data, length);
}

// Read operations
uint8_t I2CTwoWire::requestFrom(uint8_t address, uint8_t quantity) {
  return wire.requestFrom(address, quantity);
}

uint8_t I2CTwoWire::requestFrom(uint8_t address, uint8_t quantity, bool sendStop) {
  return wire.requestFrom(address, quantity, sendStop);
}

int I2CTwoWire::available() {
  return wire.available();
}

int I2CTwoWire::read() {
  return wire.read();
}

int I2CTwoWire::peek() {
  return wire.peek();
}

#include "I2CTwoWire.h"

I2CTwoWire::I2CTwoWire(TwoWire& wire) : wire(wire) {}

// Initialization
void I2CTwoWire::begin() {
  wire.begin();
}

void I2CTwoWire::begin(uint8_t address) {
  wire.begin(address);
}

void I2CTwoWire::begin(int sda, int scl) {
  wire.begin(sda, scl);
}

void I2CTwoWire::end() {
  wire.end();
}

// Configuration
void I2CTwoWire::setClock(uint32_t frequency) {
  wire.setClock(frequency);
}

// Communication
void I2CTwoWire::beginTransmission(uint8_t address) {
  wire.beginTransmission(address);
}

uint8_t I2CTwoWire::endTransmission() {
  return wire.endTransmission();
}

uint8_t I2CTwoWire::endTransmission(bool sendStop) {
  return wire.endTransmission(sendStop);
}

// Write operations
size_t I2CTwoWire::write(uint8_t data) {
  return wire.write(data);
}

size_t I2CTwoWire::write(const uint8_t* data, size_t length) {
  return wire.write(data, length);
}

// Read operations
uint8_t I2CTwoWire::requestFrom(uint8_t address, uint8_t quantity) {
  return wire.requestFrom(address, quantity);
}

uint8_t I2CTwoWire::requestFrom(uint8_t address, uint8_t quantity, bool sendStop) {
  return wire.requestFrom(address, quantity, sendStop);
}

int I2CTwoWire::available() {
  return wire.available();
}

int I2CTwoWire::read() {
  return wire.read();
}

int I2CTwoWire::peek() {
  return wire.peek();
}