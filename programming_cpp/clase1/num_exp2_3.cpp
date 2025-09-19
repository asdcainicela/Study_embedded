/*
entrada un numero y salida su cuadrado y cubo del mismo número
*/

#include <iostream>
#include <math.h>

int main(){
    int numero = 0;
    int cuadrado = 0;
    int cubo = 0;
    std::cout<<"ingrese un numero entero: "; std::cin>>numero;

    //cuadrado = numero * numero;
    //cubo = cuadrado * numero;
    cuadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    
    std::cout<<"el cuadrado de "<<numero<<" es: "<<cuadrado<<std::endl;
    std::cout<<"el cubo de "<<numero<<" es: "<<cubo<<std::endl;
}