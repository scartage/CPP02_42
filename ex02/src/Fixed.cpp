#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed::~Fixed()
{
    //std::cout << "Destrucor called" << std::endl;
}

Fixed::Fixed(const int intValue){
    //std::cout << "int constructor called " << std::endl;
    this->_fixedPoint = intValue << _fracBits;
}

Fixed::Fixed(const float floatValue){
    //std::cout << "float constructor called " << std::endl;
    this->_fixedPoint = roundf(floatValue * (1 << _fracBits));
}
// implementacion del const de copia
Fixed::Fixed(const Fixed& oldObj){
    //std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}

// operadores de comparacion

Fixed& Fixed::operator=(const Fixed& oldObj){
    std::cout << "Copy assignament operator called" << std::endl;
    if (this != &oldObj){
        this->_fixedPoint = oldObj._fixedPoint;
    }
    return *this;
}

bool Fixed::operator>(const Fixed& oldObj) const{
    return (this->_fixedPoint > oldObj.getRawBits());
}
bool Fixed::operator<(const Fixed& oldObj) const{
    return (this->_fixedPoint < oldObj.getRawBits());
}
bool Fixed::operator>=(const Fixed& oldObj) const{
    return (this->_fixedPoint >= oldObj.getRawBits());
}
bool Fixed::operator<=(const Fixed& oldObj) const{
    return (this->_fixedPoint <= oldObj.getRawBits());
}
bool Fixed::operator==(const Fixed& oldObj) const{
    return (this->_fixedPoint == oldObj.getRawBits());
}
bool Fixed::operator!=(const Fixed& oldObj) const{
    return (this->_fixedPoint != oldObj.getRawBits());
}

// operaciones aritmeticas
Fixed Fixed::operator+(const Fixed& oldObj) const{
    return (this->toFloat() + oldObj.toFloat());
}
Fixed Fixed::operator-(const Fixed& oldObj) const{
    return (this->toFloat() - oldObj.toFloat());
}
Fixed Fixed::operator*(const Fixed& oldObj) const{
    return (this->toFloat() * oldObj.toFloat());
}
Fixed Fixed::operator/(const Fixed& oldObj) const{
    return (this->toFloat() / oldObj.toFloat());
}


// incremento decremento
Fixed Fixed::operator++(void){
    this->_fixedPoint++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed pre(*this);
    this->_fixedPoint++;
    return (pre);
}

Fixed Fixed::operator--(void){
    this->_fixedPoint--;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed pre(*this);
    this->_fixedPoint--;
    return (pre);
}


int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member funct called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBis memeber funct called" << std::endl;
    this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const{
    return (this->_fixedPoint / (float)(1 << _fracBits));
}

int Fixed::toInt(void) const{
    return (this->_fixedPoint >> _fracBits);
}

// MIN 

Fixed& Fixed::min(Fixed& value, Fixed& num){
    return (value < num ? value : num);
}

const Fixed& Fixed::min(const Fixed& value, const Fixed& num){
    return (value < num ? value : num);
}

Fixed& Fixed::max(Fixed& value, Fixed& num){
    return (value > num ? value : num);
}

const Fixed& Fixed::max(const Fixed& value, const Fixed& num){
    return (value > num ? value : num);
}

std::ostream& operator<<(std::ostream& out, Fixed& fixed){
    out << fixed.toFloat();
    return out;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();
    return out;
}
