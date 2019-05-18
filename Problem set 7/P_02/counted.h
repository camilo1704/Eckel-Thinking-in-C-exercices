#ifndef COUNTED_H
#define COUNTED_H


class Counted
{   int id;
    static int count;
public:
    Counted();
    ~Counted();
    void print();
};

#endif // COUNTED_H
