#include "/Users/abhi/CPP/Design Patterns/Strategy/WithStrategy/NormalDriveStrategy.hh"
#include "/Users/abhi/CPP/Design Patterns/Strategy/WithStrategy/Vehicles.hh"


int main()
{
   OffRoadVehicle orv(new NormalDrive());
   orv.drive();
}