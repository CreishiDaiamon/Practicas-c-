#include <iostream>
using namespace std;
int main(){
    int n=0, n2, n1, suma=0, enesimo, valor;
    cout<<"ingrese el valor de n"<<endl;
    cin>>enesimo;
    while(n<=enesimo){
        n1=n-1;
        n2=n-2;
        switch (n)
        {
        case 0:
            valor=1;
            break;
        case 1:
            valor=3;
            break;
        default:
            valor = 5*n1 - 2*n2;
            break;
        }
        suma+=valor;
        n++;
    }
    cout<<"El valor de la serie en "<<--n<< " equivale a "<< valor<< " y la suma desde a0 hasta an es "<<
    suma<<endl;
    return 0;
}