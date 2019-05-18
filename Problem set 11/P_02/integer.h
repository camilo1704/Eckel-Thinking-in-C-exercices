#ifndef INTEGER_H
#define INTEGER_H
#include <stdexcept>
#include <integer.h>
#include <iostream>
using namespace std;

class integer
{
public:
    integer();
    integer(int i):entero(i){};
    int entero;
    friend integer operator- (const integer& x, const integer& y);
    friend integer operator+ (const integer& x, const integer& y);
};


#endif // INTEGER_H
