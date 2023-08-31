// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Número de ejericio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
//este arreglo determine la desviación típica.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0; // para que el índice del arreglo comience en 0
    float suma = 0.0, contador = 0.0, media;
    cout << "Ingrese la cantidad de edades (-1 para terminar): ";
    cin >> n;
    int v1[n];
    // Utilizar un bucle for para leer las edades
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la edad " << i + 1 << ": ";
        cin >> v1[i];
        if (v1[i] == -1) {
            break; // Salir del bucle si se ingresa -1
        }
        if (v1[i] != 0) {
            suma += v1[i];
            contador += 1;
        }
    }
    media=suma/contador;
    cout<<"La media es de: "<<media;
    //para calcular la desviacion tipica
    float sumatoriacuadrados=0.0;
    for (int i=0; i<n; i++){
        sumatoriacuadrados+=pow ((v1[i]-media), 2);
    }
    float varianza=sumatoriacuadrados/n;
    float desvtipica=sqrt(varianza);
    cout<<"La desviacion tipica de las edades es: "<<desvtipica;
    return 0;
}
