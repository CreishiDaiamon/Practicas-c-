/*Escriba un programa con lazos For anidados para imprimir la siguiente tabla de multiplicar
1 1 2 3 4 5 6 7 8 9
1 1
2 2 4
3 3 6 9
4 4 8 12 14
5 5 10 15 20 25
6 6 12 18 24 30 36
7 7 14 21 28 35 42 49
8 8 16 24 32 40 48 54 64
9 9 18 27 36 45 54 63 72 81*/
#include <iostream>
using namespace std;
int main (){
    int x=1, y=1;
    for (int i = 0; i <= 9; i++)
    {
        if (i==0)
        {
            cout<<"1\t";
        }
        else
        {
            cout<<i<<"\t";
        }
    }
    cout<<"\n";
    for (; y <= 9; y++)
    {
        cout<<y<<"\t";
        x=1;
        for (; x <= y; x++)
        {
            cout<<x*y<<"\t";
            if (x==y)
            {
                cout<<"\n";
            }
            
        }
    }
    return 0;
}