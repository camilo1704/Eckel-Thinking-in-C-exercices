#include "roedores.h"
#include <iostream>
using std::cout;
using std::endl;
Roedores::Roedores()
{

}
Roedores::~Roedores()
{

}
void Roedores::especie()
{
    cout<<"especie ";
}
Hamster::Hamster():
    Roedores()
{

}
Hamster::~Hamster(){}
void Hamster::especie(){
    Roedores::especie();
    cout<< "Hamster"<<endl;
}
Raton::Raton():
Roedores()
{

}
Raton::~Raton()
{

}
void Raton::especie()
{
     Roedores::especie();
    cout<< "Raton" <<endl;

}
