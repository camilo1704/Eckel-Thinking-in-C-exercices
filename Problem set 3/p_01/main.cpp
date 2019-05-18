#include <clase1.h>
#include <iostream>
using namespace std;

int main()
{
    clase1 eje(7);
    eje.get_value();
    goto c;
    c:
    eje.~clase1();

    return 0;}
