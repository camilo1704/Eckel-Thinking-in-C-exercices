#include "clase_1.h"
#include <iostream>
using namespace std;
clase_1::clase_1()
{

}
clase_1::clase_1(clase_1 & objeto, int numero):
a(numero){
    cout<<"copia"<<endl;

}
