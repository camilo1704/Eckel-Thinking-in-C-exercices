#ifndef A_H
#define A_H

class B
{
public:
    B()=delete;
};
class C
{
public:
    C()=delete;
};
class A
{
public:
    A();
    B b;
    C c;
};

#endif // A_H
