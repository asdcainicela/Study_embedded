/*
Ss tengo radio, quiero area y circunferencia
*/
#include <iostream>
#include <math.h>

int main(){
    float radio = 0.0;
    float area = 0.0;
    float circunferencia = 0.0;
    const float PI = 3.14159265359;

    std::cout<<"ingrese el valor del radio: "; std::cin>>radio;

    area = PI * pow(radio, 2);
    circunferencia = 2 * PI * radio;

    std::cout<<"el area del circulo es: "<<area<<std::endl;
    std::cout<<"la circunferencia del circulo es: "<<circunferencia<<std::endl;

    return 0;
}