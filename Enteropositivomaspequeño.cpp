/*Encontrar el entero positivo más pequeño para el cual la suma s =\sum{(j^{2}+4j+4)/j^{2}}
sea menor que un límite dado por el usuario*/
#include <iostream>
#include <cmath>
int limite,
entero=1;
double sumatoria;
using namespace std;
int main (){
    cout<<"Ingrese el limite al cual queiere que la suma sea menor"<<endl;
    cin>>limite;
    sumatoria=(pow(entero,2)+4.0*entero+4)/pow(entero,2);
    do
    {
        entero++;
        sumatoria+= (pow(entero,2)+4*entero+4)/pow(entero,2);
    } while (sumatoria<limite);
    sumatoria-=(pow(entero,2)+4.0*entero+4)/pow(entero,2);
    cout<<sumatoria<<endl;
    cout<<"el menor entero positivo para el cual la sumatoria es menor que "<<
    limite<<" es "<<--entero;
    return 0;
}