## Constructor de Copia

Un constructor de copia es un tipo especial de constructor que se invoca cuando un objeto es inicializado a partir de otro objeto de la misma clase. El propósito de un constructor de copia es crear un nuevo objeto como una copia exacta del objeto existente.

## Asignador de Copia (Copy Assignment Operator)

El operador de asignación de copia es un método que se llama cuando se asigna un objeto a otro ya existente de la misma clase, utilizando el operador =. Este operador debe asegurarse de copiar correctamente los valores de los miembros del objeto fuente al objeto destino, manejando adecuadamente la asignación de recursos como memoria.

### Uso del Constructor de Copia

Al crear un objeto `b` usando `Fixed b(a);`:

Se utiliza el constructor de copia para inicializar el objeto `b` con el objeto `a`. Aquí, `a` es un objeto existente de la clase `Fixed`, y se pasa como argumento al constructor de copia de `b`. Esto significa que el estado interno de `b` será una copia exacta del estado de `a` en el momento de la creación de `b`.

### Uso del Operador de Asignación de Copia

Al asignar `c` con `c = b;`:

Se utiliza el operador de asignación de copia para asignar el objeto `b` al objeto `c`. Antes de esta operación, `c` ya ha sido inicializado (en este caso, presumiblemente con el constructor por defecto, dado que no se especifican argumentos). El operador de asignación copiará el estado de `b` en `c`, reemplazando cualquier estado previo de `c` con el estado de `b` en el momento de la asignación.

