#ifndef CLASE_H
#define CLASE_H

class  alumno{

public:
    alumno();
    clase cal;
};
class clase
{
public:
   explicit clase();
    //clase(const clase &);
   // ~clase();
    void geta();
    int* pint;
    clase clase_interna;
    alumno* alumno_1;
   explicit clase(int);
private:
    int a=0;
};

#endif // CLASE_H
