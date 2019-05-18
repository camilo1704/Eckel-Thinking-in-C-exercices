#include "integer.h"
#include <stdexcept>
integer::integer()
{

}
integer operator+(const integer& x, const integer& y){

    try{
       if (x.entero+y.entero<-2147483648){
        throw std::underflow_error("underflow");}
       if (x.entero+y.entero>2147483648)
        throw std::overflow_error("overflow");


    }
    catch(overflow_error &e){
        cout<<e.what()<<endl;
    }
    catch(underflow_error &e){
        cout<<e.what()<<endl;
    }
  return x.entero+y.entero;
}
integer operator-(const integer& x, const integer& y){

    try{
       if (x.entero-y.entero<-2147483648)
        throw std::underflow_error("underflow");
       if (x.entero-y.entero>2147483648)
        throw std::overflow_error("overflow");


    }
    catch(overflow_error &e){
        cout<<e.what()<<endl;
    }
    catch(underflow_error &e){
        cout<<e.what()<<endl;
    }
   return x.entero-y.entero;
}
