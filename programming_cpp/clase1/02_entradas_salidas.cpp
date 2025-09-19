/*
Entradas y salidas estandar
*/

#include <iostream>

int main()
{
    int x;
    std::cout<< "ingrese un numero: ";
    std::cin>> x;
    std::cout<<"el numero ingresado es: "<<x<<std::endl;
    std::cout<<"el numero "<< x<< " se ingreso correctamente"<<std::endl;

    return 0;
}