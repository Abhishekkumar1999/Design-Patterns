#include "/Users/abhi/CPP/Design Patterns/Strategy/WithStrategy/StrategyInterface.hh"
class SportyDrive : public DriveStrategy
{
   public:
     SportyDrive()
     {
        std::cout<<"Sporty drive ctr"<<std::endl;
     }
     void drive()
     {
        std::cout<<"Sporty drive method"<<std::endl;
     }
};