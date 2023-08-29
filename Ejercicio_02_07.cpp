// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Número de ejericio: 7
// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
//Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
//“Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
//tenga el mismo valor para todos los elementos.
#include <iostream>

using namespace std;

int main() {
    string v1[7];
    string v2[7];

    cout << "Para el vector 1" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Ingrese un nombre" << endl;
        cin >> v1[i];
    }
    cout << "Para el vector 2" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Ingrese un nombre" << endl;
        cin >> v2[i];
    }
    int sonIguales = 1; // Suponemos que son iguales
    int i = 0;
    while (i < 7) {
        if (v1[i] != v2[i]) {
            sonIguales = 0; // Son diferentes
            break;
        }
        i++;
    }
    if (sonIguales) {
        cout << "Iguales" << endl;
    } else {
        cout << "Diferentes" << endl;
    }
    return 0;
}
