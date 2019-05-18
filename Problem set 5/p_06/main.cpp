#include <clase.h>
int main()
{
   double clase:: *ptrd;
   void (clase::*ptrf)(double) ;
   void (clase::*print)(void);
   print=&clase::print;
   ptrd=&clase::n;
   ptrf=&clase::assign;


   clase obj;
   (obj.*ptrf)(4);
   (obj.*print)();


   return 0;
}
