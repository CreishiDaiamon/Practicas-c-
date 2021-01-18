#include <iostream>
using namespace std;
int main (){
    char respuesta;
    cout<<"Desea continuar?...[s/n]"<<endl;
    cin>>respuesta;
    while (respuesta !='s'&& respuesta!='n')
    {
        cout<<"Por favor, ingrese \"s\" o \"n\""<<endl;
        cin>>respuesta;
        while (respuesta=='s')
        {
            cout<<"Desea continuar?...[s/n]"<<endl;
            cin>>respuesta;
        }
    }
    cout<<"programa finalizado"<<endl;
    return 0;
}