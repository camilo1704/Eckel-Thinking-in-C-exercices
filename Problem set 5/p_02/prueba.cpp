#include "prueba.h"
#include "iostream"
using namespace std;
prueba::prueba()
{
cout<<"contructor llamado"<<endl;
}
prueba::prueba(const prueba & p):
a(p.a){
    cout<<"contructor de copiaaa"<<endl;
}
