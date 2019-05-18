#include "clase1.h"
#include <iostream>
using namespace std;
clase1::clase1(int a):
    value(a)
{

}

 void clase1::get_value(){
    cout<<value<<endl;}
 clase1::~clase1(){
     delete[] &value;


 }
