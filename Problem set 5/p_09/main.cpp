#include <QCoreApplication>
#include <manager.h>
#include <iostream>
using namespace std;


int main()
{
    //new Manager(); sale que Manager::Manager es privada en este contexto
    Manager* obj1=Manager::getInstance();
    Manager* obj2=Manager::getInstance();
    Manager* obj3;
    cout<<obj1<<' '<<obj2<<' '<<obj3<<endl;//no esta inicializado obj3 pq esta como privado el constructor
    //tienen la misma direccion de memoria obj1 y obj2

    return 0;
}
