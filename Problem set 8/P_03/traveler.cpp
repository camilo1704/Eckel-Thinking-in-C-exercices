#include "traveler.h"
#include <iostream>
using  std::cout;

Traveler::Traveler(string a):
    atributo(a)
{
    cout<<"traveler constructor called"<<endl;
}
Traveler::~Traveler(){

}
Traveler::Traveler(const Traveler & to_copy): atributo(to_copy.atributo)
{
    cout<<"Traveler copy constructor called"<<endl;
}
Traveler::Traveler(Traveler && to_move):atributo(to_move.atributo){
    //indicate that to_copy is now empty
     to_move.atributo="";
     cout<<"Traveler move constructor called"<<endl;

}
Traveler& Traveler::operator =(const Traveler& other){
    if (&other!=this){

        atributo=other.atributo;
        cout<<"Traveler copy assignment operator called"<<endl;
   }
    return *this;// enables x=y=z
}
Traveler& Traveler::operator =(Traveler&& other){
    if (&other!=this){

        atributo=other.atributo;
       //indicates that other is now empty
        other.atributo="";
        cout<<"traveler move = called"<<endl;
    }
    return *this; //enables x=y=z
}

Pager::Pager(string a):
    atributo(a)
{
    cout<<"pager constructor called"<<endl;
}
Pager::~Pager(){

}
Pager::Pager(const Pager & to_copy):atributo(to_copy.atributo){
    cout<<"Pager copy constructor called"<<endl;

}

Pager::Pager(Pager && to_move):atributo(to_move.atributo){
    //indicates that to_move is now empty
    to_move.atributo="";
    cout<<"Pager move constructor called"<<endl;

}
Pager & Pager::operator =(const Pager & to_copy){
    atributo=to_copy.atributo;
    return *this;
}
Pager & Pager::operator =(Pager && to_move){
    atributo=to_move.atributo;
    to_move.atributo="";
    return *this;
}


BusinessTraveler::BusinessTraveler(string traveler, string p):
    Traveler(traveler),pager(p)
{
    cout<< "BusinessTraveler constructor called"<<endl;
}
BusinessTraveler::BusinessTraveler(const BusinessTraveler & to_copy):
    Traveler(to_copy), pager(to_copy.pager)
{
    cout<< "BusinessTraveler copy constructor called"<<endl;

}

BusinessTraveler::BusinessTraveler(BusinessTraveler && to_move):
    Traveler(to_move),pager(to_move.pager)
{

    cout <<"BusinessTraveler move constructor called"<<endl;
}
BusinessTraveler::~BusinessTraveler(){}

BusinessTraveler & BusinessTraveler::operator =(const BusinessTraveler& to_copy)
{
    if (&to_copy!=this)
    {
        pager=to_copy.pager;
        Traveler::operator =(to_copy);
    }
   return *this;

}
BusinessTraveler & BusinessTraveler::operator=(BusinessTraveler && to_move){

    if (&to_move!=this){
        pager=to_move.pager;
        Traveler::operator =(to_move);
    }
    return *this;


    }
