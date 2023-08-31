// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 12
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
//contiene los nombres de estos minerales, para obtener:
//- Buscar por nombre de mineral y desplegar la producción
//- Ordenar del mayor al menor (producción) y mostrar:
//Mineral Produccion ™
//SN 998.000
//SB 876.500
//AU 786.670
//PT 636.143
//AG 135.567
//CU 109.412
#include <iostream>
#include <string>
using namespace std;
int main() {
    string minerales[] = {"estano", "antimonio", "oro", "platino", "plata", "cobre"};
    float vp[]={998.0, 876.500, 786.670, 636.143, 135.567, 109.412};
    string mineral;
    cout<<"Ingrese el mineral"<<endl;
    cin>>mineral;
    if (mineral=="estano"){
        cout<<vp[0];
    }
    if (mineral=="antimonio"){
        cout<<vp[1];
    }
    if (mineral=="oro"){
        cout<<vp[2];
    }
    if (mineral=="platino"){
        cout<<vp[3];
    }
    if (mineral=="plata"){
        cout<<vp[4];
    }
    if (mineral=="cobre"){
        cout<<vp[5];
    }
    //para identificar al mayor y menor
    int vord[6]; //tercer vector llamado ordenado
     if (vp[0] > vp[1] && vp[1] > vp[2]) {
        if (vp[2] > vp[3] && vp[3] > vp[4]) {
            if (vp[4] > vp[5]) {
                vord[0] = 0;
                vord[1] = 1;
                vord[2] = 2;
                vord[3] = 3;
                vord[4] = 4;
                vord[5] = 5;
            }
        }
    }
    cout << "La lista de materiales ordenados seria" << endl;
    cout << minerales[vord[0]] << " " << vp[vord[0]] << "\n";
    cout << minerales[vord[1]] << " " << vp[vord[1]] << "\n";
    cout << minerales[vord[2]] << " " << vp[vord[2]] << "\n";
    cout << minerales[vord[3]] << " " << vp[vord[3]] << "\n";
    cout << minerales[vord[4]] << " " << vp[vord[4]] << "\n";
    cout << minerales[vord[5]] << " " << vp[vord[5]] << "\n";
    return 0;
}

