#include "clase.h"

Clase::Clase():
    i(0)
{

}
Clase::Clase(int a){
    i=a;
}
void Clase::print(ostream &out){
    out<<i<<endl;
}

 Clase& Clase::operator ++(){
    i++;
    cout<<"prefix operator called"<<endl;
    return *this;
}
const Clase Clase::operator ++(int){
    Clase C(i);
    C.i++;
    cout<<"postfix operator called"<<endl;
    return C;
}

ostream& operator<< (ostream& out, const Clase C){
    out<<C.i;
     return out;
}
const  Clase operator +(Clase a, Clase b){

    return Clase(a.i+b.i);
}
