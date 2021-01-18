#include <iostream>
using namespace std;
int main (){
    double num,
    suma=0,
    n=0,
    media=0;
    cout<<"Inserte un numero flotante, cuando ya no desee ingresar numeros inserte 0"<<endl;
    cin>>num;
    while (num!=0)
    {
        suma+=num;
        media=suma/++n;
        cout<<"Inserte un numero flotante"<<endl;
        cin>>num;
    }
    cout<<"La suma de los numeros ingresados es "<<suma<< " y su media es " <<media<<endl;
    return 0;
}