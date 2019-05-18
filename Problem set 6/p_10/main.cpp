#include <clase.h>
#include <iostream>
using namespace std;
int main()
{
    Clase a(2);
    Clase b(5);
    Clase c=a+b;
    Clase d(1);
    Clase e=a+b-d;
   // c.print(cout);
    //e.print(cout);
    e++;
    //e.print(cout);
    cout<<a++<<endl;
    a.print(cout);
    return 0;
}
