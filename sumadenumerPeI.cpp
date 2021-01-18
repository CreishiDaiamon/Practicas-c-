#include <iostream>
int enteros,
sumapar=0,
sumaimpar=0,
ne=0,
ni=0,
mediapar=0,
mediaimpar=0;
using namespace std; 
int main(){
    do
    {
        cout<<"Ingrese un entero positivo a la vez, cuando ya no quiera ingresar enteros ingrese 0"<<endl;
        cin>>enteros;
        if (enteros>1 && enteros%2==0)
        {
            ne++;
            sumapar+=enteros;
            mediapar=sumapar/ne;
        }
        else if (enteros == 1 || enteros%2!=0)
        {
            ni++;
            sumaimpar+=enteros;
            mediaimpar=sumaimpar/ni;
        }
    } while (enteros!=0);
    cout<<"la suma de numeros pares de la lista equivale a "<<sumapar<<" y su media a "<<mediapar
    <<" mientras que la suma de numero impares equivale a "<<sumaimpar<<" y su media a "<<mediaimpar
    <<endl;
    return 0;
}
