#ifndef BASE_H
#define BASE_H


class base
{ int b;
public:
    base();
    base(int );
    base(const base &);
    void print();
    virtual base* clone();
    virtual ~base(){};


};
class derivada_1: public base
{   int d;
public:
    derivada_1();
    derivada_1(int , int);
    derivada_1(const derivada_1 &);
    void print();
    derivada_1* clone();
    ~derivada_1(){};

};

#endif // BASE_H
