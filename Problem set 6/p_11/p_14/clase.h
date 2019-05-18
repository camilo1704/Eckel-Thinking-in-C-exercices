#ifndef CLASE_H
#define CLASE_H
#include <iostream>
using namespace std;
class Clase
{ int i;
  friend ostream& operator<<(ostream&,const Clase );
  friend const Clase operator +(const Clase, const Clase);
public:
    Clase();
    Clase(int );

   // const Clase operator+(const Clase) const ;
    //const Clase operator-(const Clase) const ;
    void print(ostream& out);
    const Clase operator++(int );//postfix
    Clase& operator++();//prefix

};


#endif // CLASE_H
