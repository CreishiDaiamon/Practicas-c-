#include <iostream>
int limit, 
suma= 0,
cont=1;
using namespace std;
int main(){
    cout<<"Ingrese el limite superior de la suma\n";
    cin>>limit;
    do
    {
        suma += cont;
        cont++;
    } while (cont<=limit);
    cout<<"la suma de 1 hasta "<<limit<<" es de "<<suma;
    return 0;
}