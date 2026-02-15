#include <iostream>
#ifndef STRATEGY
#define STRATEGY

class DriveStrategy
{
    public:
      virtual void drive()=0;
      virtual ~DriveStrategy(){}
};

#endif