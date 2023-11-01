# Estructuras de datos

## Array 
Cuando usar:
- *Cuando necesitas acceso rápido por índice*: Son ideales cuando sabes la posición exacta de los elementos.

Costes de las operaciones
- Acceso por índice (lectura o escritura): O(1)
- Inserción o eliminación en una posición específica: O(n)
- Inserción o eliminación al final: O(1) si no se supera la capacidad.
- Búsqueda: O(n)
## String 

## Vector 
Cuando usar:
 - *Cuando necesitas una estructura de datos dinámica*: Útiles para almacenar elementos de manera dinámica.

Coste de las operaciones
- Acceso por índice (lectura o escritura): O(1)
- Inserción o eliminación en una posición específica: O(n)
- Inserción o eliminación al final (amortizado): O(1)
- Búsqueda: O(n)

## Pila 
Cuando usar:
- *Cuando necesitas operaciones LIFO*: Perfectas para "último en entrar, primero en salir".

Coste de las operaciones
- Inserción (push) y eliminación (pop) en la parte superior: O(1)
- Búsqueda: O(n)

## Lista (Enlazada) / List 
Cuando usar:
- *Cuando necesitas inserciones y eliminaciones eficientes en el medio*: Excelentes para operaciones en el medio de la estructura.

Coste de las operaciones
- Acceso por índice: O(n)
- Inserción o eliminación en una posición específica: O(1) con puntero adecuado.
- Inserción o eliminación al principio o al final: O(1)
- Búsqueda: O(n)

## Cola / queue 
Cuando usar:
- *Cuando necesitas operaciones FIFO*: Ideales para "primero en entrar, primero en salir".

Coste de las operaciones
- Inserción (enqueue) y eliminación (dequeue) en el frente o al final: O(1)
- Búsqueda: O(n)

## Cola de prioridad / priority_queue
Cuando usar:
- *Cuando necesitas priorizar elementos*: Utiliza una cola de prioridad para gestionar elementos en función de su prioridad.

Coste de las operaciones
- Inserción (push) y eliminación (pop) del elemento de mayor prioridad: O(log n)
- Búsqueda del elemento de mayor prioridad: O(1)

## Conjuntos / set 
Cuando usar:
- *Cuando necesitas almacenar elementos únicos y ordenados*: Son perfectos para mantener una colección de elementos únicos y ordenados.

Coste de las operaciones
- Inserción: O(log n)
- Búsqueda: O(log n)
- Eliminación: O(log n)

## Mapa / map 
Cuando usar:
 - *Cuando necesitas asociar valores con claves únicas*: Utiliza mapas para asociar valores con claves únicas de manera eficiente.

Coste de las operaciones
- Inserción: O(log n)
- Búsqueda por clave: O(log n)
- Eliminación por clave: O(log n)

## Typedef 
