// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 14
// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
//los números capicúa contenidos en el primero.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool esCapicua(int num) {
    int original = num;
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return original == invertido;
}
int main() {
    int N, M, C;
    cout << "Ingrese el primer limite" << endl;
    cin >> N;
    cout << "Ingrese el segundo limite" << endl;
    cin >> M;
    C = M - N + 1; // Ajuste de la cantidad de valores a generar
    srand(time(0));
    int v[C];
    for (int i = 0; i < C; i++) {
        v[i] = rand() % (M - N + 1) + N; // Generar valores aleatorios en ese rango
    }
    cout << "Números capicúas en el rango [" << N << ", " << M << "]:" << endl;
    for (int i = 0; i < C; i++) {
        if (esCapicua(v[i])) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
