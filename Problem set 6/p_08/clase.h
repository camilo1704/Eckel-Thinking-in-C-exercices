#ifndef CLASE_H
#define CLASE_H


class Clase
{
public:
    Clase();
    ~Clase();
    int* ptrint;
};

class Clase_ok
{

public:
    Clase_ok();
    int* ptrint;
    ~Clase_ok();
    Clase_ok operator=(const Clase_ok&);


};

#endif // CLASE_H
