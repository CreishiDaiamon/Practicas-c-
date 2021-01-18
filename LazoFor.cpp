/*Para un valor positivo n, el factorial de n se denota por
n! y se define como el producto de los enteros desde 1 hasta n:0! Esta definido como 1.
Escriba un porgra,a que lea un valor entero positivo n y luego utilice un lazo for
para calcular n */
#include <iostream>
#include <cmath>
int n,
factorial;
using namespace std;
int main(){
    cin>>n;
    factorial=1;
    if (n==0)
    {
        cout<< "el factorial de "<< n <<" es "<<factorial;
    }
    else
    {
        for (int zero=1;zero<=n ; zero++)
        {
            factorial*=zero;
        }
        cout<< "el factorial de "<< n <<" es "<<factorial;
    }
    return 0;
}