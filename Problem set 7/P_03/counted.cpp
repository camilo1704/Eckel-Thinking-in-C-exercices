#include "counted.h"
#include <iostream>
using namespace std;

int Counted::count=0;

Counted::Counted():
    id(count++)
{
cout<<" constructor llamado "<<endl;
}
Counted::~Counted(){
    cout<<" Destructor llamado"<<endl;
}
void Counted::print(){
    cout<<id<<endl;
}
ostream& operator<< (ostream& out, const Counted& counted){
    out<<counted.id;
    return out;


}
