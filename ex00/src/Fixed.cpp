#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

// implementacion del const de copia
Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}

// implementacion de la asignacion de copia
Fixed& Fixed::operator=(const Fixed& oldObj){
    std::cout << "Copy assignament operator called" << std::endl;
    if (this != &oldObj){
        this->_fixedPoint = oldObj._fixedPoint;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destrucor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member funct called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBis memeber funct called" << std::endl;
    this->_fixedPoint = raw;
}
