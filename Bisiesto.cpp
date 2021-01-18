#include <iostream>
using namespace std;
//Diseñe un programa que determine si un año es bisiesto
int year;
int main (){
    cout<< "Ingrese YEAR para determinar si es bisiesto o no\n\n"; 
    cin>> year;
    if ( (year %4 == 0 && year %100 != 0) || year % 400 == 0 )
    {
    cout<<"el year "<< year << " es bisiesto";
    }
    else {
        cout<<"el year "<< year << " no es bisiesto";
    }
    return 0;
}