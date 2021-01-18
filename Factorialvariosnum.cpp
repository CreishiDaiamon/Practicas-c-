#include <iostream>
using namespace std;
int num,
cont=1,
fac=1;
int main(){
    cout<<"ingrese un numero para calcular su factorial"<<endl;
        cin>>num;
    do
    {
        while(cont<=num){
            fac*=cont;
            ++cont;
        }
        cout<<"El factorial de "<<num<< " es "<<fac<<endl;
        cout<<"ingrese un numero para calcular su factorial"<<endl;
        cin>>num;
    } while (num>=0);
    cout<<"Programa finalizado"<<endl;
    return 0;
}