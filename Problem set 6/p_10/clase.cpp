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
const Clase Clase::operator +(const Clase derecha) const {
    return Clase(i + derecha.i);
}
const Clase Clase::operator -(const Clase derecha)const {
    return Clase(i-derecha.i);
}
const Clase& Clase::operator ++(){
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
