#include "base.h"
#include <iostream>
using namespace std;
base::base():b(0)
{

}
base::base(int a):b(a)
{

}
base::base(const base & tocopy):b(tocopy.b)
{

}
void base::print(){
    cout<<"base"<<endl;
}
base* base::clone(){

    return new base(*this);
}

derivada_1::derivada_1():base()
{

}
derivada_1::derivada_1(int a, int c): base(a), d(c)
{

}
derivada_1::derivada_1(const derivada_1 & tocopy):base(tocopy), d(tocopy.d)
{

}

derivada_1 * derivada_1::clone(){

    return new derivada_1(*this);
}
void derivada_1::print(){
    cout<<"derivada_1"<<endl;
}
