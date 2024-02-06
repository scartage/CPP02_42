#include <iostream>
#include "Fixed.hpp"

int main(void){
    Fixed a;       //creo obj
    a.setRawBits(42);
    Fixed b( a );   //creo otro obj en base a (a)
    Fixed c;

    c = b;          //obj ya creado se asignan valores de (a);

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}