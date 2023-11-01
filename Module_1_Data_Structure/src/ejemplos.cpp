#include <iostream>
#include <vector>
#include <stack>
#include <list>

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


// Para compilar g++ ejemplos.cpp -o compilation/ejemplos
int main(){
    cout << "Hello world" << endl;
    return 0;
}
