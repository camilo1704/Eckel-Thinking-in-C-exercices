#ifndef ROEDORES_H
#define ROEDORES_H


class Roedores
{
public:
    Roedores();
    virtual ~Roedores();
    virtual void especie();

};
class Hamster: public Roedores{
  public:

    Hamster();
    ~Hamster();
    void especie();

};
class Raton:public Roedores{
public:

    Raton();
    ~Raton();
    void especie();
};


#endif // ROEDORES_H
