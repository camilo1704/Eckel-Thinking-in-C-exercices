#ifndef SPACESHIP_H
#define SPACESHIP_H


class SpaceShip
{
public:
    SpaceShip();
    void fly();
};
class Shuttle: public SpaceShip
{
public:
    void land();

};


#endif // SPACESHIP_H
