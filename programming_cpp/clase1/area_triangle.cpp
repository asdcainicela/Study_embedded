/*
Area del triangulo
*/

#include <iostream>

int main(){
    float base, altura, area = 0.0;
    std::cout <<" ingrese la base del triangulo: "; std::cin>>base;
    std::cout <<" ingrese la altura del triangulo: "; std::cin>>altura;
    area = (base * altura) / 2;
    std::cout <<" el area del triangulo es: "<<area<<std::endl;

    return 0;


}