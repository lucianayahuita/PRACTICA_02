// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Numero de ejericio: 10
// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
//contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
//la mayor población y el nombre del departamento que tiene la menor población.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string vd[] = {"La Paz", "Cochabamba", "Oruro", "Santa Cruz", "Beni", "Pando", "Tarija", "Chuquisaca", "Potosi"};
    int p[] = {2927000, 2028600, 548500, 3320000, 480300, 154400, 583330, 654000, 880650};
    int pmayor = p[0];
    int pmenor = p[0];
    string depMayor = vd[0];
    string depMenor = vd[0];
    for (size_t i = 1; i < sizeof(p) / sizeof(p[0]); i++) {
        if (p[i] > pmayor) {
            pmayor = p[i];
            depMayor = vd[i];
        }
        if (p[i] < pmenor) {
            pmenor = p[i];
            depMenor = vd[i];
        }
    }
    cout << "Departamento con mayor poblacion: " << depMayor << " - Poblacion: " << pmayor << endl;
    cout << "Departamento con menor poblacion: " << depMenor << " - Poblacion: " << pmenor << endl;
    return 0;
}
