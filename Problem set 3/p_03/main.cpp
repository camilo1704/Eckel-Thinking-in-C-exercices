#include <iostream>
#include <string>
using namespace std;
struct fruta
{
    fruta() {}
    float peso;

    string color="blanco";
    char display_color(void);

    int pesodoble(int );
} mandarina,naranja,manzana;

int pesodoble(int a)
{
    return a*2;
}
void display_color(fruta frutita){
    cout<< frutita.color<<endl;
}

int main()
{
    cout<< sizeof(fruta)<<endl;
    fruta fruta1;
    display_color(fruta1);

    return 0;
}
