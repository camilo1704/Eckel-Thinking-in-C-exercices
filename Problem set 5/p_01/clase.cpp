#include "clase.h"
#include <iostream>
using namespace std;

clase::clase()
{
cout<<"constructor llamado"<<endl;
}
void clase::geta(){
   cout<<a<<endl;

}
clase::clase(int i):
    a(i)
{
   cout<<"constructor llamado"<<endl;
                };

alumno::alumno(){}
