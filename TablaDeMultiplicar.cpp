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
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        if (i==0)
        {
            std::cout<<" \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
        }
    std::cout<< "\n";
    for (size_t i = 0; i <= 1 ; i++)
        {
            std::cout<<"1 \t";
        }
        std::cout<< "\n";
    for (size_t i = 0; i <= 4; i+=2)
    {
        if(i==0){
            std::cout<<"2 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
        for (size_t i = 0; i <= 9; i+=3)
    {
        if(i==0){
            std::cout<<"3 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    for (size_t i = 0; i <= 16; i+=4)
    {
        if(i==0){
            std::cout<<"4 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
        for (size_t i = 0; i <= 25; i+=5)
    {
        if(i==0){
            std::cout<<"5 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    for (size_t i = 0; i <= 36; i+=6)
    {
        if(i==0){
            std::cout<<"6 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    for (size_t i = 0; i <= 49; i+=7)
    {
        if(i==0){
            std::cout<<"7 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    for (size_t i = 0; i <= 64; i+=8)
    {
        if(i==0){
            std::cout<<"8 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    for (size_t i = 0; i <= 81; i+=9)
    {
        if(i==0){
            std::cout<<"9 \t";
        }
        else
        {
            std::cout<<i<<"\t";
        }
    }
    std::cout<< "\n";
    return 0;
}