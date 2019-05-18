#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int fibo(bool Reset=false, int &a=p, int &b=0)
{      if (Reset=true){

       *b=1;
       *a=0;
       return *a+*b;

    }
            else {

            int aux=a+b;
            *a=*b;
            *b=aux;
            return *aux;
}
}


int main()
{   int a=0;
    int b=1;
    p,a,b=fibo(a,b);
    cout<<p<<endl;



    return 0;
}
