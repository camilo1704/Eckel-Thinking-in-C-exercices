#include <QCoreApplication>
#include <clase.h>
#include <iostream>
using namespace std;

clase func(clase c){
cout<<"function called"<<endl;
    return c;
}
int main()
{
    clase d;
    clase d1=func(d);
    return 0;
}
