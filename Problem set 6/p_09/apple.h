#ifndef APPLE_H
#define APPLE_H

class Orange
{
public:
    Orange();
    ~Orange();

};
class Apple
{
public:
    Apple();
    ~Apple();
    Apple(Orange& );
};

#endif // APPLE_H
