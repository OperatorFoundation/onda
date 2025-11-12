//
// Created by Dr. Brandon Wiley on 5/26/25.
//

#ifndef CLOCK_H
#define CLOCK_H

#define EXPORT

class EXPORT Clock
{
  public:
    virtual ~Clock() = default;

    virtual int now();
    virtual void wait(int durationInMilliseconds); // In milliseconds
};

#endif //CLOCK_H
