#include "/Users/abhi/CPP/Design Patterns/Strategy/WithoutStrategy/Vehicle.hh"

class OffRoadingVehicle : public Vehicle
{
public:
   OffRoadingVehicle()
   {
     std::cout<<"OffRoadingVehicle"<<std::endl;
   }
   void drive()
   {
     std::cout<<"sporty drive fuctionality"<<std::endl;
   }
};