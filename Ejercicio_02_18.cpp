// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
//hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
//vector (sólo los elementos introducidos).
#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;
    int v[tamano];
    int i;
    // Rellenar el vector con números hasta que se llene o se ingrese un número negativo
    for (i = 0; i < tamano; i++) {
        cout << "Ingresa un número (negativo para terminar): ";
        cin >> v[i];
        if (v[i] < 0) {
            i--; // Disminuir i para no considerar el número negativo
            break;
        }
    }
    // Imprimir los elementos introducidos (sin considerar el último negativo)
    cout << "Elementos introducidos:" << endl;
    for (int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }
    cout << endl;
    return 0;
}
