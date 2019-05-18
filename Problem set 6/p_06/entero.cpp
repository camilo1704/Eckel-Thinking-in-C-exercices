#include "entero.h"
#include <iostream>
using namespace std;
entero::entero(): i(0)
{

}
entero::entero(int a):
    i(a)
{
}
const entero entero::operator+(const entero& right) const{
        return (i+right.i);
    }
const entero entero::operator ++(int a) const {
        entero m(a);
        a++;
        cout << "increment constant = " << a << endl;
        return m;
}
const entero entero::operator --(int a) const {
        entero m(a);
        a--;
        cout << "decrement constant = " << a << endl;
        return m;
}

