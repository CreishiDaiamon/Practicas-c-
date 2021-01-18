#include <iostream>
using namespace std;
int main(){
    int n1, n2, resta, n=1;
    cout<<"Ingrese el dividendo"<<endl;
    cin>>n1;
    cout<<"Ingrese el divisor"<<endl;
    cin>>n2;
    resta=n1-n2;
    for (; resta >= n2; n++)
    {
        resta-=n2;
    }
    cout<<"El residuo de la division "<<n1<<"/"<<n2<< " es igual a "<<resta
    <<" su cociente es "<<n<<endl;
    return 0;
}
