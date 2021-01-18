#include <iostream>
using namespace std;
int main (){
    int n;
    bool primo=true;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    for(int a =2;a<n;a++){
        if (n%a==0)
        {
            primo=false;
            break;
        }
    }
    switch (primo)
    {
    case false:
        cout<<"El numero no es primo"<<endl;
        break;
    default:
        cout<<"el numero es primo"<<endl;
        break;
    }
    return 0;
}