#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
public:
    Figura();
    virtual void dibujar()=0;
    virtual ~Figura();
};

class Triangulo: public Figura
{

public:
    Triangulo();
    void dibujar();
    ~Triangulo();
};
class Cuadrado: public Figura {
public:
    Cuadrado();
    void dibujar();
    ~Cuadrado();
};
#endif // FIGURA_H
