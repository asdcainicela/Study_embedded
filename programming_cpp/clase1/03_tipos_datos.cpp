/*
Tipos de datos
*/

#include <iostream>

int main(){
    // Entero 4 bytes
    int entero = 15;
    std::cout<<"el valor de entero es: "<<entero<<std::endl;
    // Flotante 4 bytes
    float flotante = 15.5;
    std::cout<<"el valor de flotante es: "<<flotante<<std::endl;

    unsigned int entero_positivo = 15;
    std::cout<<"el valor de entero_positivo es: "<<entero_positivo<<std::endl;
    
    // double 8 bytes
    double doble = 3.14159265359;
    std::cout<<"el valor de doble es: "<<doble<<std::endl;

    // char 1 byte
    char caracter = 'a';
    std::cout<<"el valor de caracter es: "<<caracter<<std::endl;

    // booleano 1 byte
    bool booleano = true; // false 
    std::cout << "el valor de booleano es: " << booleano << std::endl;
    std::cout << "el valor de ~booleano es: " << (~booleano) << std::endl;
    std::cout << "el valor de !booleano es: " << (!booleano) << std::endl;


    return 0;
}