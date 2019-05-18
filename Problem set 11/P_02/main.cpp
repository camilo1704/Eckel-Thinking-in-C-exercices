#include <QCoreApplication>
#include <stdexcept>
#include <integer.h>
using namespace std;
int main()
{

    try{
        integer(0.5);

    }
    catch(overflow_error &e){
        cout << "Exception occurred: " <<e.what()<< endl;
    }
    catch(underflow_error &e){

        cout << "Exception occurred: " <<e.what()<< endl;
            }
    return 0;
}
