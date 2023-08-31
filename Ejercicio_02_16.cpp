// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 16
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
//leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
//muéstralo por la pantalla.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int tamano = 5;
    string vectorOriginal[tamano];
    string vectorInvertido[tamano];
    cout << "Ingrese " << tamano << " cadenas de caracteres:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vectorOriginal[i];
    }
    // Copiar en orden inverso
    for (int i = 0; i < tamano; i++) {
        vectorInvertido[i] = vectorOriginal[tamano - 1 - i];
    }
    cout << "\nVector invertido:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Elemento " << i + 1 << ": " << vectorInvertido[i] << endl;
    }
    return 0;
}
