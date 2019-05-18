#include <QCoreApplication>
#include <prueba.h>

int function(prueba p){
return 0;

}

prueba function2(){
    prueba p2;
    return p2;
}

int main()
{
    prueba p;

    function(p);
    prueba p3;
    p3=function2();
    //tendria q aparecer 2 veces
    return 0;
}
