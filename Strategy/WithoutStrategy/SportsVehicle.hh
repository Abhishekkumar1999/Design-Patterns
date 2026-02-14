#include "/Users/abhi/CPP/Design Patterns/Strategy/WithoutStrategy/Vehicle.hh"

class SportsVehicle : public Vehicle
{
public:
   SportsVehicle()
   {
     std::cout<<"SportsVehicle"<<std::endl;
   }
   void drive()
   {
     std::cout<<"sporty drive fuctionality"<<std::endl;
   }
};