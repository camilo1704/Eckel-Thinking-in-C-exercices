#ifndef EXC_H
#define EXC_H
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;


class exc:public runtime_error
{int i;
    string s;

public:
    exc(int a,const string l ):i(a),s(l),runtime_error(l){};
     const char* what() const throw(){
         const char* d(s.c_str());
        return d;
    }

     ~exc(){};

};

#endif // EXC_H
