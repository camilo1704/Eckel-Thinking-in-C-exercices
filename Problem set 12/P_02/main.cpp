#include <list>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    vector <int> vec={3,4,5};
    list <int> lista;
    lista.push_back(10);
    cout<<*(lista.begin())<<endl;
    cout<<lista.size()<<endl;

    for (vector<int>::iterator i=vec.begin();i!=vec.end();i++){
        lista.push_back(*i);}

     for (list<int>::iterator i=lista.begin();i!=lista.end();i++){
        cout<<*(i)<<endl;
      //  cout<<*i<<endl;}
    }
    return 0;
}
