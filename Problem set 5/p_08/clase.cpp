#include "clase.h"
#include <iostream>
using namespace std;
clase::clase()
{

}
clase::clase(clase &&){
    cout<<"move constructor called"<<endl;
}
clase::clase(clase &){

    cout<<"copy constructor called"<<endl;
}
