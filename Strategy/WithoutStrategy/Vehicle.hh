#ifndef VEHICLE_HH
#define VEHICLE_HH
#include<iostream>

class Vehicle{
public:
   Vehicle()
   {
     std::cout<<"Vehicle"<<std::endl;
   }
   virtual void drive()
   {
     std::cout<<"Normal drive fuctionality"<<std::endl;
   }
};
#endif