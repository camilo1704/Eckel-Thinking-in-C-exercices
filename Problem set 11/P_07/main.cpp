#include <exc.h>
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    try{
    if (a==0) throw exc(a,"ops");}

    catch (exc & e){
        cout<<"hello"<<endl;
        e.what();

    }
    return 0;
}
