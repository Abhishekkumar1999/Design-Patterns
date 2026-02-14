#include "/Users/abhi/CPP/Design Patterns/Strategy/WithoutStrategy/Vehicle.hh"

class NormalVehicle : public Vehicle
{
public:
   NormalVehicle()
   {
     std::cout<<"NormalVehicle"<<std::endl;
   }
};