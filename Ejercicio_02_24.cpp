// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 24
// Problema planteado: Leer una cadena en may�sculas y c�mbielas en min�scula.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string v1;
    cout << "Ingrese una palabra en MAYUSCULA" << endl;
    cin >> v1;
    // Convertir a min�sculas
    for (char &c : v1) {
        c = tolower(c);
    }
    cout << "Palabra en minusculas: " << v1 << endl;
    return 0;
}

