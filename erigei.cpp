#include <iostream>
using namespace std;
int main (){
    char respuesta;
    cout<<"let´s start the game, solo puedes decir si 1 vez y no 1 vez\n"<<"ERI GEI?...[s/n]"<<endl;
    cin>>respuesta;
    while (respuesta !='s'&& respuesta!='n')
    {
        cout<<"Por favor, ingrese \"s\" o \"n\""<<endl;
        cin>>respuesta;
        }
    switch (respuesta)
        {
    case 's':
        break;
        
    case 'n':
        while (respuesta=='n')
        {   
            cout<<"MIENTES?...[s/n]"<<endl;
            cin>>respuesta;
            while (respuesta !='s'&& respuesta!='n')
            {
                cout<<"Por favor, ingrese \"s\" o \"n\""<<endl;
                cin>>respuesta;
            }
        }
            break;
        }
    cout<<"Tremendo joto"<<endl;
    return 0;
}