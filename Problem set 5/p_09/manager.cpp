#include "manager.h"
#include <iostream>
using namespace std;
Manager::Manager()
{

}
Manager* Manager::getInstance(){

    if (instance == 0)
        {
            instance = new Manager();
        }

    return instance;
}
Manager* Manager::instance=0;
