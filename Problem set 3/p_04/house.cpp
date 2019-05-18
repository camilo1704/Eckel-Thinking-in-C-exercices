#include "house.h"
#include <iostream>
using namespace std;
house::house(int a):
    rooms(a)
{

}
void house::getroom(void){

    cout<< rooms <<endl;
}
