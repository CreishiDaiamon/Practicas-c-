#include <iostream>
using namespace std;
int main(){
    int n1, n2, div1, res1, res2,res3;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;
    if (n2<n1)
    {
        //dividir numero mas grande por mas pequeño
        div1 = n1/n2;
        res1=n1%n2;
        if (res1==0){
            cout<<"El MCD de "<<n1 <<" y " <<n2<<" es "<< n2<<endl;
        }
        else{
            div1=n2/res1;
            res2=n2%res1;
            res3=res1;
            while (res2!=0)
            {
                div1=res1/res2;
                res3=res2;
                res2=res1%res2;
            }
            cout<<"El MCD de "<<n1 <<" y " <<n2<<" es "<< res3<<endl;
        }
    }
    else
    {
        //dividir numero mas grande por mas pequeño
        div1 = n2/n1;
        res1=n2%n1;
        if (res1==0){
            cout<<"El MCD de "<<n1 <<" y " <<n2<<" es "<< n1<<endl;
        }
        else{
            div1=n1/res1;
            res2=n1%res1;
            res3=res1;
            while (res2!=0)
            {
                div1=res1/res2;
                res3=res2;
                res2=res1%res2;
            }
            cout<<"El MCD de "<<n1 <<" y " <<n2<<" es "<< res3<<endl;
        }
    }
    return 0;
}