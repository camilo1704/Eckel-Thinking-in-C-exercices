#ifndef BASE_H
#define BASE_H
#include <iostream>
using std::cout;
using std::endl;

class base
{   int dato;
public:
    base();
    virtual ~base();
};

class derivada: public base
{
    int dato_b;
public:
    derivada();

};


#endif // BASE_H
