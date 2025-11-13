//
// Created by Dr. Brandon Wiley on 5/26/25.
//

#ifndef ARDUINOCLOCK_H
#define ARDUINOCLOCK_H

#include <clock.h>

class ArduinoClock : public Clock
{
  public:
    ArduinoClock() = default;

    int now(); // In milliseconds
    void wait(int durationInMilliseconds); // In milliseconds
    void waitMicroseconds(int durationInMicroseconds); // In microseconds
};

#endif //ARDUINOCLOCK_H
