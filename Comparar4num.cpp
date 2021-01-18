//Escribir un programa para poder encotrar el mayor y el menor de una lectura de 4 numeros desde el teclado.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int num1,
    num2,
    num3,
    num4;
int main(){
    cout<< "Inserte el primer n\372mero"<<endl;
    cin >> num1;
    cout<< "Inserte el segundo n\372mero"<<endl;
    cin >> num2;
    cout<< "Inserte el tercer n\372mero"<<endl;
    cin >> num3;
    cout<< "Inserte el cuarto n\372mero"<<endl;
    cin >> num4;
    if(num1==num2 || num2 == num3 || num4 == num3 || num2 ==num4 || num4 == num1 || num3 == num1){
        cout<< "No te pases de listo amigo, que los n\372meros no se repitan, por piedad"<<endl;
    }
    else {
    if (num1 > num2 && num1 > num3 && num1 > num4){
        cout << "el mayor de los n\372meros es "<< num1<<endl;   
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
        {
            cout << "el mayor de los n\372meros es "<< num2<<endl;
        }
        else if (num3 > num1 && num3 > num2 && num3 > num4){
            cout << "el mayor de los n\372meros es "<< num3<<endl;
        }
            else if (num4 > num1 && num4 > num2 && num4 > num3)
            {
                cout << "el mayor de los n\372meros es "<< num4<<endl;
            }
    if (num1 < num2 && num1 < num3 && num1 < num4){
    cout << "el menor de los n\372meros es "<< num1<<endl;
}
    else if (num2 < num1 && num2 < num3 && num2 < num4)
        {
            cout << "el menor de los n\372meros es "<< num2<<endl;
        }
        else if (num3 < num1 && num3 < num2 && num3 < num4){
            cout << "el menor de los n\372meros es "<< num3<<endl;
        }
            else if (num4 < num1 && num4 < num2 && num4 < num3)
            {
                cout << "el menor de los n\372meros es "<< num4<<endl;
            }
    }
    return 0;
}