// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 29/08/2023
// Fecha modificaci�n: 29/08/2023
// N�mero de ejericio: 8
// Problema planteado: Se tiene el arreglo
//Ventas:
//0 1 2 10 11
//vene vfeb vmar . . vnov vdic
//Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
//contiene los nombres de los meses:
//Meses:
//0 1 2 10 11
//�Ene� �Feb� �Mar� . . �Nov� �Dic�
//Escriba un programa que obtenga:
//� �En qu� mes(es) se dieron las ventas m�ximas de la empresa?
//� �A cu�nto ascendieron las ventas m�ximas?
//� �Cu�l fue el total de las ventas?
//Las ventas deben ser ingresadas por teclado
#include <iostream>

using namespace std;

int main() {
    int v1[12];
    int v2[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int totalventas=0;
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese la venta para el mes " << v2[i] << ": ";
        cin >> v1[i];
        totalventas+=v1[i];
    }
    int mayor = v1[0];
    int menor = v1[0];
    int indiceMayor = 0;
    int indiceMenor = 0;
    for (int i = 1; i < 12; i++) {
        if (v1[i] > mayor) {
            mayor = v1[i];
            indiceMayor = i;
        }
        if (v1[i] < menor) {
            menor = v1[i];
            indiceMenor = i;
        }

    }
    cout << "La mayor venta fue en el mes " << v2[indiceMayor] << endl;
    cout << "El total de ventas fue "<< totalventas <<endl;
    return 0;
}


