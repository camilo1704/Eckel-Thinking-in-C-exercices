#include "clase.h"

Clase::Clase():
ptrint(new int)
{

}

Clase::~Clase(){
delete ptrint;
}
Clase_ok::Clase_ok():
    ptrint(new int)
{

}
Clase_ok::~Clase_ok(){
    delete ptrint;

}
Clase_ok Clase_ok::operator=(const Clase_ok& to_copy){
    if (&to_copy!=this){
        ptrint=new int(*(to_copy.ptrint));} //crea un nuevo objeto y le manda la direccion a ptrint

        return *this;
    }


