#include <QCoreApplication>
#include <clase.h>
#include <iostream>
using namespace std;
int main()
{
    clase objeto1(5);
    clase objeto2(objeto1);
    objeto2.geta();// no imprimio nada, luego creo un copy constructor
    cout<<"direccion del miembro int de objeto 1: "<< &objeto1.pint<<endl;
    cout<<"direccion del miembro int de objeto 2: "<< &objeto2.pint<<endl;
    //son distintos pq el compilador tiene un copy constructor de int*??

    cout<<"direccion del miembro clase de objeto 1: "<< &objeto1.clase_interna<<endl;
    cout<<"direccion del miembro clase de objeto 2: "<< &objeto2.clase_interna<<endl;
    return 0;
}
