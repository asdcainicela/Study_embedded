/*
Ingrese 3 numeros enteros y muéstrelos en orden inverso.
Input: 1 2 3
output: 3 2 1
*/

#include <iostream>

int main(){
    int numero1, numero2, numero3;
    std:: cout<< "ingrese primer numero entero: ";
    std:: cin>> numero1;
    std:: cout<< "ingrese segundo numero entero: ";
    std:: cin>> numero2;
    std:: cout<< "ingrese tercer numero entero: ";
    std:: cin>> numero3;

    std:: cout<< "los numeros en orden inverso son: " << numero3 << " " << numero2 << " " << numero1 << std:: endl;
}