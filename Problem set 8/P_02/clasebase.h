#ifndef CLASEBASE_H
#define CLASEBASE_H

class Clasebase
{
public:
    Clasebase();
    ~Clasebase();
};

class Derivada1: public Clasebase{
public:
    Derivada1();
    ~Derivada1();

};
class Embebida{
public:
    Embebida();
    ~Embebida();
};
class Derivada2: public Derivada1{
    Embebida e;
public:
    Derivada2();
    ~Derivada2();

};


#endif // CLASEBASE_H
