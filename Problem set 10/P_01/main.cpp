#include <iostream>
using namespace std;

template<class T>
T fibo(T n){
   const size_t size=100;
   static T f[100];
   f[0]=f[1]=1;
   for (int i=2; i<size;i++)
   {
       f[i]=f[i-1]+f[i-2];
   }
    return f[int(n)];
}


int main()
{
    cout<<fibo(3.)<<endl;

    return 0;
}
