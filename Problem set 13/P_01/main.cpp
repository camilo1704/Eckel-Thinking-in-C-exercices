#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char,int> mapa;
    mapa['a']=1;
    mapa['b']=2;
   auto it=mapa.find('b');
if (it!=mapa.end())
   {
    cout<<it->first<<it->second<<endl;}
    return 0;
}
