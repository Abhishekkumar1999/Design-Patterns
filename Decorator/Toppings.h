#include "/Users/abhi/CPP/Design Patterns/Decorator/Pizza.hh"


class Toppings: public BasePizza{
    public:
    Toppings(BasePizza* base):p(base){}
     virtual int getCost() const = 0;
    protected:
      BasePizza* p;  
};

class ExtraCheese: public Toppings {
    public:
     ExtraCheese(BasePizza* base):Toppings(base)
     {}
     int getCost() const{
        return p->getCost()+100;
     }   
};

class ExtraChicken: public Toppings {
    public:
     ExtraChicken(BasePizza* base):Toppings(base)
     {}
     int getCost() const{
        return p->getCost()+200;
     }
};
