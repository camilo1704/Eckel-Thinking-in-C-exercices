#include "clase.h"
#include <iostream>
using namespace std;
clase::clase()
{

}
void clase::print(){
    cout<<number<<endl;
}
int clase::get(){
    return number;
}
void clase::assign(double d){
    number=d;
}
