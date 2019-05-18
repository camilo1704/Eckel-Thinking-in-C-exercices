#include <roedores.h>
#include <iostream>

int main()
{
    Roedores* r[]={new Roedores, new Hamster, new Raton};

    (*r[1]).especie();

    for (size_t i=0; i<sizeof(r)/sizeof(Roedores);i++){

        delete [] r[i];
        r[i]=0;
    }

    return 0;
}
