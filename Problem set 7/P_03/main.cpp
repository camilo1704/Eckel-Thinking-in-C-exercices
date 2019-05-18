#include <counted.h>
#include <vector>
#include<iostream>
using namespace std;

int main()
{
    vector <Counted*> vec;

    for (int i=0;i<5;i++)
    {
        vec.push_back(new Counted);
    }
    for (int i=0;i<5;i++)
    {
        cout<<*vec[i]<<' ';
    }

    for (int i=0;i<5;i++)
    {
        Counted* aux= vec.back();
        vec.pop_back();
        delete aux;
    }


    return 0;
}
