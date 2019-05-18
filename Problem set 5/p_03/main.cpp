#include <clasita.h>


void func(clasita objeto){
    //objeto.~clasita();
}
int main()
{
    clasita C{7};

       func(C);
    return 0;
}
