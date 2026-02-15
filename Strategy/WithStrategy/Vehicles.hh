#include "/Users/abhi/CPP/Design Patterns/Strategy/WithStrategy/StrategyInterface.hh"

class Vehicle{
    private:
      DriveStrategy* ds;
    public:
      Vehicle(DriveStrategy* ds){
        this->ds = ds;
      }
      void drive()
      {
        ds->drive();
      }
      ~Vehicle(){
        if(ds)
          delete ds;
      }
};

class SportyVehicle : public Vehicle
{
     public:
      SportyVehicle(DriveStrategy* ds):Vehicle(ds)
      {}
};

class NormalVehicle : public Vehicle
{
    public:
      NormalVehicle(DriveStrategy* ds):Vehicle(ds)
      {}
};

class OffRoadVehicle : public Vehicle
{
   public:
      OffRoadVehicle(DriveStrategy* ds):Vehicle(ds)
      {}
};