#include "figura.h"
#include <iostream>
using std::cout;
using std::endl;

Figura::Figura()
{
    cout<<"constructor de Figura llamado"<<endl;
}
Figura::~Figura(){
    cout<<"destructor de Figura llamado"<<endl;
}

Triangulo::Triangulo():
Figura()
{
    cout<<"constructor de Triangulo llamado"<<endl;
}
Triangulo::~Triangulo(){

}
void Triangulo::dibujar(){
    cout<<"Triangulo::dibujar llamado"<<endl;

}
Cuadrado::Cuadrado():
Figura()
{
    cout<<"constructor de Cuadrado llamado"<<endl;

}
Cuadrado::~Cuadrado(){
    cout<<"destructor de Cuadrado llamado"<<endl;

}
void Cuadrado::dibujar(){
    cout<<"Cuadrado::dibujar llamado"<<endl;

}
