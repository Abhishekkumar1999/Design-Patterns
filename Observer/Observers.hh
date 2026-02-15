#include <string>
#include <iostream>

class Subscriber
{
private:
    std::string name;
    int id;

public:
    Subscriber(std::string n, int i) : name(n), id(i)
    {
    }
    bool operator==(const Subscriber& other) const {
       // Two subscribers are the same if their IDs are equal
       return this->id == other.id;
    }
    void notify(std::string msg) const
    {
        std::cout << name << "_" << id << " got " << msg << std::endl;
    }
};