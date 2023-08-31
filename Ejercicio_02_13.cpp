// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 13
// Problema planteado: Almacenar en un arreglo los n primeros números primos
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese hasta el numero que desea ver los numeros primos"<<endl;
    cin>>n;
    int v[n];
    int cont = 0; // Contador de números primos
    for (int i = 2; i <= n; i++) {
        int j = 2;
        for (; j * j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j * j > i) { // Si no se encontró divisor, j*j será mayor que i
            v[cont] = i;
            cont++;
        }
    }

    cout << "Los numeros primos son: ";
    for (int i = 0; i < cont; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
