#include <deque>
#include <list>
#include <iostream>
using namespace std;

int main()
{
    deque <int> a={9,2};
    deque <int> b={3,4};
    list <deque<int>> lq={a,b};
    cout<<*lq.begin()->begin()<<endl;


    return 0;
}
