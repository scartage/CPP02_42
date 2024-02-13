# C++ - Module 02
## Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form
### Summary:
This document contains the exercises of Module 02 from C++ modules.

# Constructor de Copia

Un constructor de copia es un tipo especial de constructor que se invoca cuando un objeto es inicializado a partir de otro objeto de la misma clase. El propósito de un constructor de copia es crear un nuevo objeto como una copia exacta del objeto existente [[1]].

# Asignador de Copia (Copy Assignment Operator)

El operador de asignación de copia es un método que se llama cuando se asigna un objeto a otro ya existente de la misma clase, utilizando el operador =. Este operador debe asegurarse de copiar correctamente los valores de los miembros del objeto fuente al objeto destino, manejando adecuadamente la asignación de recursos como memoria [[1]].

## Uso Demostrado en `main`

- **Constructor de copia**: para crear una copia de un objeto existente en el momento de la inicialización de un nuevo objeto.
- **Operador de asignación de copia**: para copiar el contenido de un objeto existente a otro objeto ya inicializado, sustituyendo su estado anterior.

### Ejemplo:

- Al crear `b` usando `Fixed b(a);`:
  - Se utiliza el constructor de copia para inicializar el objeto `b` con el objeto `a`. Aquí, `a` es un objeto existente de la clase `Fixed`, y se pasa como argumento al constructor de copia de `b`. Esto significa que el estado interno de `b` será una copia del estado de `a` en el momento de la creación de `b`.

- Al asignar `c` con `c = b;`:
  - Se utiliza el operador de asignación de copia para asignar el objeto `b` al objeto `c`. Antes de esta operación, `c` ya ha sido inicializado (en este caso, presumiblemente con el constructor por defecto, dado que no se especifican argumentos). El operador de asignación copiará el estado de `b` en `c`, reemplazando cualquier estado previo de `c` con el estado de `b` en el momento de la asignación [[1]].

# El sobrecarga de operadores (Operator Overloading) en C++

El sobrecarga de operadores (Operator Overloading) en C++ es una característica del lenguaje que permite a los programadores definir o modificar el comportamiento de los operadores estándar (como +, -, ==, etc.) cuando se utilizan con objetos de clases definidas por el usuario. Esto hace que el código sea más intuitivo y legible, permitiendo que los objetos de tus clases interactúen mediante operadores comunes de una manera específica para su contexto [[2]].

## Usos del Sobrecarga de Operadores

La sobrecarga de operadores se utiliza en C++ para varios propósitos, incluyendo:

- Realizar operaciones aritméticas con objetos de clases personalizadas, como sumar dos objetos de una clase Vector.
- Comparar objetos para igualdad, desigualdad u otro tipo de comparaciones.
- Acceder a elementos dentro de objetos compuestos, similar a cómo se acceden los elementos de un array o un mapa.
- Incrementar o decrementar el valor de un objeto, como con iteradores o punteros inteligentes.
- Entrada y salida de objetos mediante los operadores >> y << para lectura y escritura en flujos [[3]].


[Wiki Módulo 02](https://github.com/qingqingqingli/CPP/wiki/Module02)
