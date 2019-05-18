#include "clasita.h"
#include <iostream>
#include <string>
using namespace std;

clasita::clasita(double x):
    g(new double{x})
{

}
clasita::~clasita()
{
    cout<<g<<endl;
    *g=-1;
    delete g;
    g=NULL;
}
