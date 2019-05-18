#include <clase.h>
#include <iostream>
using namespace std;

int main()
{ Clase C;
  Clase B;
  int i=7;
  C.ptrint=&i;
  B=C;
  cout<<C.ptrint<<endl;
  cout<<B.ptrint<<endl;//apuntan a lo mismo
  cout<<&i<<endl;

    Clase_ok C_ok;
    Clase_ok B_ok;
    C_ok.ptrint=&i;
    B_ok=C_ok;

    cout<<C_ok.ptrint<<endl;
    cout<<B_ok.ptrint<<endl;//apunta distinto a lo mismo
    cout<<&i<<endl;
    return 0;
}
