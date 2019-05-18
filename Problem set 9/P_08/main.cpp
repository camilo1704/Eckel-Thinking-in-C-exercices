#include <base.h>

int main()
{
    base b(1);
    derivada_1 d(2,3);
    base* a=b.clone();

    base* a1=d.clone();
    a1->print();
    d.print();
    delete &b;
    delete &d;
    delete a;
    delete a1;
    return 0;
}
