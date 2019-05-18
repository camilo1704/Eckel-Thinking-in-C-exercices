#include "monitor.h"
#include <iostream>
using namespace std;
Monitor::Monitor()
{

}
void Monitor::incident(){
    calls++;
}
void Monitor::print()
{
    cout<<"# de llamadas= "<<calls<<endl;
}
int Monitor::calls=0;
