// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 13
// Problema planteado: Almacenar en un arreglo los n primeros n�meros primos
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese hasta el numero que desea ver los numeros primos"<<endl;
    cin>>n;
    int v[n];
    int cont = 0; // Contador de n�meros primos
    for (int i = 2; i <= n; i++) {
        int j = 2;
        for (; j * j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j * j > i) { // Si no se encontr� divisor, j*j ser� mayor que i
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
