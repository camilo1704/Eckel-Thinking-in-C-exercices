#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <iostream>
using namespace std;

template <class T>
class lista
{
    class link
    {
       T* data;
       link* next;
       link(T* dat, link * lnk):data(dat),next(lnk){};

    } *head;
public:
    lista():head(0){};
    ~lista(){
        while (head){
            delete pop();
        }
    }
    T* pop(){
        if (head==0) return 0;
        T* a_devolver= head->data; // lo que voy a retornar;
        link *oldhead=head; //auxiliar para borrar oldhead
        head=head->next;
        delete oldhead;
        return a_devolver;
    }
    void push(T* dat){
        head= new link(dat,head);
        cout<<head->next<endl;
     }


};
class datos{

int i;
public:
    datos();
    datos(int a):i(a){};
};

#endif // TEMPLATE_H
