#include "message.h"
#include <string>
#include <iostream>
using namespace std;

Message::Message(string s):
    text(s)

{

}
void Message::print(void)
{
    cout<<text<<endl;
}
void Message::print(string texto){

    cout<<texto<<" "<<text<<endl;
}
