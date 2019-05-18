#include <roedores.h>
#include <vector>
using namespace std;

int main()
{
    vector<Roedores *> r;
    r.push_back(new Roedores);

    r.push_back(new Raton);

    r.push_back(new Hamster);

    //para borrar

    Roedores *temporal;
    while(!r.empty()){
        temporal=r.back();
        r.pop_back();
        delete temporal;
    }


    return 0;
}
