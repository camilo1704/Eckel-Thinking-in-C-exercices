#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
using namespace std;

class Message
{
public:
    Message(string ="empty");
    void print(void);
    void print(string);
private:
    string text;
};

#endif // MESSAGE_H
