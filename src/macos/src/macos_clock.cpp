//
// Created by Dr. Brandon Wiley on 11/24/25.
//

#include "macos_clock.h"

macOSClock::macOSClock() : startTime(std::chrono::steady_clock::now()) {}

macOSClock::~macOSClock() = default;

int macOSClock::now() // In milliseconds
{
  auto currentTime = std::chrono::steady_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime);
  return static_cast<int>(elapsed.count());
}

void macOSClock::wait(int durationInMilliseconds) // In milliseconds
{
  std::this_thread::sleep_for(std::chrono::milliseconds(durationInMilliseconds));
}

void macOSClock::waitMicroseconds(int durationInMicroseconds) // In microseconds
{
  std::this_thread::sleep_for(std::chrono::microseconds(durationInMicroseconds));
}