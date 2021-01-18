/*La Secuencia de los números de Fibonacci comienza con los enteros 0,1,1,2,3,5,8,13,21
donde cada número después de los dos primeros es la suma de los dos números precedentes.
En esta secuencia, las razones de los numeros de fibonacci consecutivos (F_{n+1}/F_{n})
se aproximan al "golden ratio"(1+sqrt{5})/2. Escriba un programa  que calcule e imprima todos los 
numeros de fibonacci menores que 10000, las razones de los numeros consecutivos de 
Fibonaccci y la suma de estas razones*/
#include <iostream>
#include <iomanip>
#include <cmath>
double num1 = 0,
num2=1,
num3,
num4,
suma,
razon;
const int NumeroMax = 10000;
int main (){
    std:: cout<< "\nNumeros de Fibonacci\n";
    std::cout<<std::left<<std::setw(8)<<"numero"<<std::left<<std::setw(8)<<"suma"
    <<std::left<<std::setw(8)<<"razon"<<std::endl;
    suma=num1;
    razon=num1;
    std::cout<<std::left<<std::setw(8)<<std::setprecision(1)<<num1<<std::left<<std::setw(8)
    <<suma<<std::left<<std::setw(8)<<razon<<std::endl;
    std::cout<<std::left<<std::setw(8)<<std::setprecision(1)<<num2<<std::left<<std::setw(8)
    <<num1+num2<<std::left<<std::setw(8)<<num1/num2<<std::endl;
    num3=num1+num2;
    std::cout<<std::left<<std::setw(8)<<std::setprecision(1)<<num3<<std::left<<std::setw(8)
    <<num2+num3<<std::left<<std::setw(8)<<num2/num3<<std::endl;
    while (num4<=NumeroMax)
    {
        num4=num2+num3;
        suma=num4+num3;
        razon=num4/num3;
        std::cout<<std::left<<std::setw(8)<<num4<<std::left<<std::setw(8)<<suma
        <<std::setprecision(8)<<razon<<std::endl;
        num2=num3;
        num3=num4;
        num4=num2+num3;
    }
    return 0;
}