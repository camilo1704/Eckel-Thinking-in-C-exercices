#include <traveler.h>
#include <string>

BusinessTraveler func(){
    string c="a";
    string v="v";
    BusinessTraveler b(c,v);
    return b;
}

int main()
{
    string p="pager1";
    string t="traveler1";
    BusinessTraveler b(p,t);
    BusinessTraveler b3(func());

    return 0;
}
