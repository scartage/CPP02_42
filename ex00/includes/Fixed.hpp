#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*Constructor de Copia
Un constructor de copia es un tipo especial de constructor que se invoca cuando un objeto es inicializado a partir de otro objeto de la misma clase. El propósito de un constructor de copia es crear un nuevo objeto como una copia exacta del objeto existente. */

/*Asignador de Copia (Copy Assignment Operator)
El operador de asignación de copia es un método que se llama cuando se asigna un objeto a otro ya existente de la misma clase, utilizando el operador =. Este operador debe asegurarse de copiar correctamente los valores de los miembros del objeto fuente al objeto destino, manejando adecuadamente la asignación de recursos como memoria. */

class Fixed
{
private:
    /* data */
    int _fixedPoint;
    static const int _fracBits = 8;
public:
    Fixed( void );
    // constrcutor de copia
    Fixed(const Fixed& oldObj);
    // asignacion de copia
    Fixed& operator=(const Fixed& oldObj);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif