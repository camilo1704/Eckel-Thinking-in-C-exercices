#ifndef COUNTED_H
#define COUNTED_H
#include <iostream>
using namespace std;

class Counted
{   int id;
    static int count;
    friend ostream& operator<< (ostream&, const Counted&);

public:
    Counted();
    ~Counted();
    void print();
};

#endif // COUNTED_H
