#ifndef ENTERO_H
#define ENTERO_H


class entero
{
    int i;
public:
    entero();
    entero(int );
    const entero operator+( const entero& )const ;
    const entero operator++(int ) const;
    const entero operator--(int  ) const;

};
#endif // ENTERO_H
