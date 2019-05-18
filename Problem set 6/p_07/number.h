#ifndef NUMBER_H
#define NUMBER_H


class Number
{
    double D;
public:
    Number();
    Number(double );
    const Number operator+(const Number& );
    const Number operator-(const Number& );
    void print();
    Number operator=(const Number&);
    //Number operator=(const double&);

    const Number operator*(const Number&);
    const Number operator/(const Number&);
    operator double();
};

#endif // NUMBER_H
