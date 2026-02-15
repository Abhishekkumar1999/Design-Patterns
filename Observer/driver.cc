#include "/Users/abhi/CPP/Design Patterns/Observer/publisher.hh"

int main()
{
    Publisher p;
    Subscriber s1("First",1);
    Subscriber s2("Second",2);
    Subscriber s3("Third",3);
    Subscriber s4("Fourth",4);
    Subscriber s5("Fifth",5);

    p.subscribe(s1);
    p.subscribe(s2);
    p.subscribe(s3);
    p.subscribe(s4);
    p.subscribe(s5);
    p.notifyObservers("Ullu de pathe");
    p.unsubscribe(s5);
    std::cout<<"\n\n";
    p.notifyObservers("Ullu de pathe");
    return 0;
}