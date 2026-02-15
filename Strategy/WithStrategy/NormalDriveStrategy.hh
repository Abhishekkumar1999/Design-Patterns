#include "/Users/abhi/CPP/Design Patterns/Strategy/WithStrategy/StrategyInterface.hh"
class NormalDrive : public DriveStrategy
{
   public:
     NormalDrive()
     {
        std::cout<<"Normal drive ctr"<<std::endl;
     }
     void drive()
     {
        std::cout<<"Normal drive method"<<std::endl;
     }
};