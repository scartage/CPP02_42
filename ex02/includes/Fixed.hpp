#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>    // para std::round
#include <string>

class Fixed
{
private:
    int _fixedPoint;
    static const int _fracBits = 8;
public:
    Fixed( void );
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed& oldObj);

    // operadores de comparacion
    Fixed& operator=(const Fixed& oldObj);
    bool operator>(const Fixed& oldObj) const;
    bool operator<(const Fixed& oldObj) const;
    bool operator>=(const Fixed& oldObj) const;
    bool operator<=(const Fixed& oldObj) const;
    bool operator==(const Fixed& oldObj) const;
    bool operator!=(const Fixed& oldObj) const;

    // operadores aritmeticos
    Fixed operator+(const Fixed& oldObj) const;
    Fixed operator-(const Fixed& oldObj) const;
    Fixed operator*(const Fixed& oldObj) const;
    Fixed operator/(const Fixed& oldObj) const;

    // incremento decremento
    Fixed operator++(void);
    Fixed operator++(int);
    Fixed operator--(void);
    Fixed operator--(int);

    // overload functions
    static Fixed& min(Fixed& val, Fixed& num);
    static const Fixed& min(const Fixed& val, const Fixed& num);

    static Fixed& max(Fixed& val, Fixed& num);
    static const Fixed& max(const Fixed& val, const Fixed& num);
    
    //otras funciones
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
std::ostream& operator<<(std::ostream& out, Fixed& fixed);

#endif