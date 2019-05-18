#include "clase_01.h"
#include <iostream>
using namespace std;
Clase_01::Clase_01(int a)

{
    Number=a;

}
void Clase_01::change(int n){
    Number=n;
}
void Clase_01::print(){
    cout<<Number<<endl;
}
