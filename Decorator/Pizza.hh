#ifndef BASE
#define BASE
#include <iostream>
#include <iostream>

class BasePizza{
    public:
      BasePizza(){
        price=100;
      }
    virtual int getCost() const {return price;};
    protected:
      int price;
};

class FarmHouse: public BasePizza
{
    public:
     int getCost() const {return price+100;};
};

class Margherita: public BasePizza
{
    public:
     int getCost() const {return price+50;};
};

#endif