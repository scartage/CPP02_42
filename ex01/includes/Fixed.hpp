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

    // constrcutor de copia
    Fixed(const Fixed& oldObj);
    // asignacion de copia
    Fixed& operator=(const Fixed& oldObj);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;

    ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif