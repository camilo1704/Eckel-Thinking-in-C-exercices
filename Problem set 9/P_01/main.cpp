#include <figura.h>
#include <iostream>
int main()
{
   Figura *f[]={new Figura, new Triangulo, new Cuadrado};
   f[0]->dibujar();
   f[1]->dibujar();
   f[2]->dibujar();
   (*f[0]).dibujar();

   for (size_t i = 0; i < sizeof(f) / sizeof(*f); i++) {
       delete f[i];
       f[i] = 0;
}

    return 0;
}
