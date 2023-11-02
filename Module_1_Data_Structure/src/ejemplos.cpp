#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>

using namespace std;

void array(){
    // Declarar un arreglo de enteros
    int miArray[5];

    // Inicializar el arreglo con valores
    miArray[0] = 1;
    miArray[1] = 2;
    miArray[2] = 3;
    miArray[3] = 4;
    miArray[4] = 5;

    // Acceder a los elementos del arreglo
    cout << "Elemento en la posición 0: " << miArray[0] << endl;
    cout << "Elemento en la posición 1: " << miArray[1] << endl;

    // Obtener el tamaño del arreglo
    int tamaño = sizeof(miArray) / sizeof(miArray[0]);
    cout << "Tamaño del arreglo: " << tamaño << endl;

    // Iterar a través del arreglo
    for (int i = 0; i < tamaño; i++) {
        cout << "Elemento en la posición " << i << ": " << miArray[i] << endl;
    }
}  

void arrayBidimensional(){
    // Declarar e inicializar un arreglo bidimensional (matriz)
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Acceder a los elementos de la matriz
    cout << "Elemento en la fila 1, columna 2: " << matriz[0][1] << endl;
    cout << "Elemento en la fila 2, columna 3: " << matriz[1][2] << endl;

    // Obtener el número de filas y columnas
    int filas = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    cout << "Número de filas: " << filas << endl;
    cout << "Número de columnas: " << columnas << endl;

    // Iterar a través de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento en la fila " << i << ", columna " << j << ": " << matriz[i][j] << endl;
        }
    }
}

// Para vector es necesario importar su libreria
void vectorExample() {
    // Declarar un vector de enteros
    vector<int> miVector;

    // Agregar elementos al vector
    miVector.push_back(1);
    miVector.push_back(2);
    miVector.push_back(3);

    // Acceder a los elementos del vector
    cout << "Elemento en la posición 0: " << miVector[0] << endl;
    cout << "Elemento en la posición 2: " << miVector[2] << endl;

    // Obtener el tamaño del vector
    cout << "Tamaño del vector: " << miVector.size() << endl;

    // Iterar a través del vector
    for (int elemento : miVector) {
        cout << "Elemento: " << elemento << endl;
    }
}

// Necesario importar su libreria stack
void pila(){
    stack<int> miPila;

    // Agregar elementos a la pila (push)
    miPila.push(1);
    miPila.push(2);
    miPila.push(3);

    // Acceder al elemento en la parte superior de la pila
    cout << "Elemento en la parte superior de la pila: " << miPila.top() << endl;

    // Eliminar elementos de la pila (pop)
    miPila.pop();

    // Verificar si la pila está vacía
    if (miPila.empty()) {
        cout << "La pila está vacía." << endl;
    } else {
        cout << "La pila no está vacía." << endl;
    }
}

// Necesario importar la libreria list
void listaEnlazada(){
    list<int> miLista;

    // Agregar elementos al final de la lista
    miLista.push_back(1);
    miLista.push_back(2);
    miLista.push_back(3);

    // Mostrar elementos de la lista
    cout << "Elementos de la lista: ";
    for (const int& elemento : miLista) {
        cout << elemento << " ";
    }
    cout << endl;

    // Agregar elementos al principio de la lista
    miLista.push_front(0);

    // Mostrar elementos de la lista nuevamente
    cout << "Elementos de la lista después de agregar al principio: ";
    for (const int& elemento : miLista) {
        cout << elemento << " ";
    }
    cout << endl;

    // Eliminar un elemento específico (por valor)
    int valorAEliminar = 2;
    miLista.remove(valorAEliminar);

    // Mostrar elementos de la lista después de eliminar
    cout << "Elementos de la lista después de eliminar el valor " << valorAEliminar << ": ";
    for (const int& elemento : miLista) {
        cout << elemento << " ";
    }
    cout << endl;

    // Buscar un elemento específico (por valor)
    int valorABuscar = 3;
    auto iterador = find(miLista.begin(), miLista.end(), valorABuscar);
    if (iterador != miLista.end()) {
        cout << "Se encontró el valor " << valorABuscar << " en la posición " << distance(miLista.begin(), iterador) << endl;
    } else {
        cout << "El valor " << valorABuscar << " no se encontró en la lista." << endl;
    }
}

void queueExample(){
    queue<int> cola;

    // Agregar elementos a la cola
    cola.push(5);
    cola.push(10);
    cola.push(15);
    cola.push(20);

    // Mostrar el tamaño de la cola
    cout << "Tamaño de la cola: " << cola.size() << endl;

    // Acceder al elemento en la parte frontal de la cola
    cout << "Elemento en la parte frontal: " << cola.front() << endl;

    // Eliminar el elemento en la parte frontal de la cola
    cola.pop();

    // Mostrar el nuevo elemento en la parte frontal
    cout << "Elemento en la parte frontal después de la eliminación: " << cola.front() << endl;

    // Verificar si la cola está vacía
    if (cola.empty()) {
        cout << "La cola está vacía." << endl;
    } else {
        cout << "La cola no está vacía." << endl;
    }

    // Recorrer y mostrar todos los elementos en la cola
    cout << "Elementos en la cola: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
}

void priorityQueueExample() {
    // Crear una cola de prioridad en orden descendente
    priority_queue<int> cola_de_prioridad;

    // Agregar elementos a la cola de prioridad
    cola_de_prioridad.push(5);
    cola_de_prioridad.push(10);
    cola_de_prioridad.push(3);
    cola_de_prioridad.push(15);

    // Mostrar el elemento de mayor prioridad
    cout << "Elemento de mayor prioridad: " << cola_de_prioridad.top() << endl;

    // Eliminar el elemento de mayor prioridad
    cola_de_prioridad.pop();

    // Mostrar el nuevo elemento de mayor prioridad
    cout << "Nuevo elemento de mayor prioridad: " << cola_de_prioridad.top() << endl;

    // Verificar si la cola de prioridad está vacía
    if (cola_de_prioridad.empty()) {
        cout << "La cola de prioridad está vacía." << endl;
    } else {
        cout << "La cola de prioridad no está vacía." << endl;
    }

    // Recorrer y mostrar todos los elementos en la cola de prioridad
    cout << "Elementos en la cola de prioridad: ";
    while (!cola_de_prioridad.empty()) {
        cout << cola_de_prioridad.top() << " ";
        cola_de_prioridad.pop();
    }
    cout << endl;
}

// Ejemplo de cola de prioridad con una struct
struct Persona {
    string nombre;
    int edad;

    // Operador de comparación personalizado
    bool operator<(const Persona& otra) const {
        return edad > otra.edad; // Orden descendente por edad
    }
};

void priorityQueuePersonaExample(){
    priority_queue<Persona> cola_de_prioridad;

    Persona p1, p2, p3;
    p1.edad = 30;
    p1.nombre = "Alice";
    p2.edad = 40;
    p2.nombre = "Bob";
    p3.edad = 50;
    p3.nombre = "Charlie";

    // Agregar personas a la cola de prioridad
    cola_de_prioridad.push(p1);
    cola_de_prioridad.push(p2);
    cola_de_prioridad.push(p3);

    // Mostrar la persona de mayor prioridad (la de mayor edad)
    cout << "La persona de mayor edad es: " << cola_de_prioridad.top().nombre << " (" << cola_de_prioridad.top().edad << " años)" << endl;

    // Eliminar la persona de mayor prioridad
    cola_de_prioridad.pop();

    // Mostrar la nueva persona de mayor prioridad
    cout << "La nueva persona de mayor edad es: " << cola_de_prioridad.top().nombre << " (" << cola_de_prioridad.top().edad << " años)" << endl;
}

void setExample(){
    // Crear un conjunto de números enteros
    set<int> miSet;

    // Agregar elementos al conjunto
    miSet.insert(5);
    miSet.insert(10);
    miSet.insert(15);
    miSet.insert(10); // Los conjuntos no permiten elementos duplicados, por lo que este no se agregará

    // Mostrar el tamaño del conjunto
    cout << "Tamaño del conjunto: " << miSet.size() << endl;

    // Verificar si un elemento está en el conjunto
    int elementoBuscado = 10;
    if (miSet.count(elementoBuscado) > 0) {
        cout << elementoBuscado << " está en el conjunto." << endl;
    } else {
        cout << elementoBuscado << " no está en el conjunto." << endl;
    }

    // Recorrer y mostrar todos los elementos en el conjunto
    cout << "Elementos en el conjunto: ";
    for (const auto& elemento : miSet) {
        cout << elemento << " ";
    }
    cout << endl;
}


void mapExample(){
    // Crear un mapa de cadenas a enteros
    map<string, int> miMapa;

    // Agregar elementos al mapa
    miMapa["Alice"] = 30;
    miMapa["Bob"] = 25;
    miMapa["Charlie"] = 35;

    // Mostrar el tamaño del mapa
    cout << "Tamaño del mapa: " << miMapa.size() << endl;

    // Acceder a un valor a través de una clave
    string clave = "Bob";
    if (miMapa.find(clave) != miMapa.end()) {
        cout << clave << " tiene " << miMapa[clave] << " años." << endl;
    } else {
        cout << clave << " no se encontró en el mapa." << endl;
    }

    // Recorrer y mostrar todos los pares clave-valor en el mapa
    cout << "Pares clave-valor en el mapa: " << endl;
    for (const auto& par : miMapa) {
        cout << par.first << ": " << par.second << " años" << endl;
    }

}

// Para compilar g++ ejemplos.cpp -o compilation/ejemplos
int main(){
    cout << "Hello world" << endl;
    return 0;
}
