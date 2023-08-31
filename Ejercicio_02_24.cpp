// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string v1;
    cout << "Ingrese una palabra en MAYUSCULA" << endl;
    cin >> v1;
    // Convertir a minúsculas
    for (char &c : v1) {
        c = tolower(c);
    }
    cout << "Palabra en minusculas: " << v1 << endl;
    return 0;
}

