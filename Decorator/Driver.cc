#include "/Users/abhi/CPP/Design Patterns/Decorator/Pizza.hh"
#include "/Users/abhi/CPP/Design Patterns/Decorator/Toppings.h"

int main()
{
    Toppings* t = new ExtraChicken(new ExtraCheese(new Margherita()));
    std::cout<<t->getCost();
    return 0;
}