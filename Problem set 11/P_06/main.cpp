#include <iostream>
using namespace std;

int main()
{
   int a=0;
   try{
       if (a==0)
           throw runtime_error("error 1");
   }
   catch(runtime_error &e){
       cout<< e.what()<<endl;
       throw runtime_error("error 2");}



    return 0;
}
