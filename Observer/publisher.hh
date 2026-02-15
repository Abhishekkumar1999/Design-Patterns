#include "/Users/abhi/CPP/Design Patterns/Observer/Observers.hh"
#include <list>
class Publisher{
    private:
      std::list<Subscriber> observers;
    public:
      void subscribe(const Subscriber& user)
      {
        observers.push_back(user);
      }
      void unsubscribe(const Subscriber& user)
      {
        observers.remove(user);
      }
      void notifyObservers(std::string msg)
      {
        for(const auto& usr: observers)
          usr.notify(msg);
      }
};