// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 21
// Problema planteado: Programa que declare tres vectores �vector1�, �vector2� y �vector3� de cinco enteros cada
//uno, pida valores para �vector1� y �vector2� y calcule vector3=vector1+vector2.
#include <iostream>
using namespace std;
int main() {
    int vector1[5] = {0};  // Inicializaci�n de vectores
    int vector2[5] = {0};
    int vector3[5] = {0};
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el n�mero para el vector 1" << endl;
        cin >> vector1[i];
        cout << "Ingrese el n�mero para el vector 2" << endl;
        cin >> vector2[i];
    }
    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }
    cout << "El vector resultante de la suma del vector 1 m�s el vector 2 es:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vector3[i] << " ";
    }
    return 0;
}
