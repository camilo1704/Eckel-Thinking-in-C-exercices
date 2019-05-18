#ifndef TRAVELER_H
#define TRAVELER_H
#include <string>
using namespace std;


class Traveler
{
   string atributo;
public:
    Traveler(string );
    ~Traveler();
    Traveler(const Traveler&); // copy contructor
    Traveler(Traveler&&); //move contructor
    Traveler &operator =(const Traveler &); //copy assignment operator
    Traveler &operator =( Traveler && ); //move assigment operator
    void set_atributo();
  };

class Pager
{
   string atributo;
public:
    Pager(string );
    Pager(const Pager&);
    Pager(Pager &&);
    ~Pager();
    Pager &operator=(const Pager&);
    Pager &operator=(Pager &&);
    void set_atributo();
    };
class BusinessTraveler: public Traveler
{
    Pager pager;
public:
    BusinessTraveler();
    BusinessTraveler(string traveler, string p);
    BusinessTraveler(const BusinessTraveler& b);
    BusinessTraveler(BusinessTraveler &&);
    BusinessTraveler &operator=(const BusinessTraveler &);
    BusinessTraveler &operator=(BusinessTraveler &&);
    ~BusinessTraveler();
};


#endif // TRAVELER_H
