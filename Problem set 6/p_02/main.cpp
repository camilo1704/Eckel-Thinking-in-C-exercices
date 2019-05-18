#include <QCoreApplication>
#include <monitor.h>
void function(){

    static Monitor m0;
    //m0.print();
    m0.incident();
    m0.print();
}
int main()
{
    function();
    function();
    return 0;
}
