#include "/Users/abhi/CPP/Design Patterns/Strategy/WithoutStrategy/Vehicle.hh"
#include "/Users/abhi/CPP/Design Patterns/Strategy/WithoutStrategy/SportsVehicle.hh"

int main()
{
   Vehicle *v = new SportsVehicle();
   v->drive();
}

//If we notice in this program, then Sporty and offroading drive algo is same.