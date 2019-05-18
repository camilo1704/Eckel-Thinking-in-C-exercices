#include <counted.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   Counted *c=new Counted;
    delete c;

    Counted* const array_ptr = new Counted[5];
     delete []array_ptr;
    return 0;

}
