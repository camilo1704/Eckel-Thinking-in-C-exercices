#include "number.h"
#include <iostream>
using namespace std;
Number::Number()
{

}
Number::Number(double d)
    :D(d)
{
cout<<" constructor(double) called"<<endl;
}
const Number Number::operator+(const Number& N){
    cout<<"+ called"<<endl;
    return Number(N.D+D);
}
const Number Number::operator -(const Number& N){
    return Number(D-N.D);
}
void Number::print(){
    cout<< D<<endl;
}
Number Number::operator=(const Number& N){
    if (&N!=this){
    D=N.D;
    }
    cout<<"= called"<<endl;
    return *this;
}
const Number Number::operator*(const Number& N){
    return Number((N.D)*D);

}
const Number Number::operator/(const Number& N){
    return Number(D/(N.D));

}
Number::operator double(){
    cout<<"conv operator"<<endl;
    return D;
}

//Number Number::operator=(const double& x){
 //   cout<<"=d called"<<endl;
  //  D=x;
   // return *this;
//}
