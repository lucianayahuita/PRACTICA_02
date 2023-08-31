// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida n�meros para rellenarlo
//hasta que se llene el vector o se introduzca un n�mero negativo. Entonces se debe imprimir el
//vector (s�lo los elementos introducidos).
#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;
    int v[tamano];
    int i;
    // Rellenar el vector con n�meros hasta que se llene o se ingrese un n�mero negativo
    for (i = 0; i < tamano; i++) {
        cout << "Ingresa un n�mero (negativo para terminar): ";
        cin >> v[i];
        if (v[i] < 0) {
            i--; // Disminuir i para no considerar el n�mero negativo
            break;
        }
    }
    // Imprimir los elementos introducidos (sin considerar el �ltimo negativo)
    cout << "Elementos introducidos:" << endl;
    for (int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }
    cout << endl;
    return 0;
}
