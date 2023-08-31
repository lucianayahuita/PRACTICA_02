// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 23
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese la dimension de los dos vectores"<<endl;
    cin>>n;
    int v1[n];
    int v2[n];
    int v3[2*n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor para el primer vector"<<endl;
        cin>>v1[i];
        cout<<"Ingrese el valor para el segundo vector"<<endl;
        cin>>v2[i];
    }
    //para combinar ambos vectores
    for (int i = 0; i < n; i++) {
        v3[i] = v1[i];
        v3[n + i] = v2[i];
    }
    for (int i=0;i<2*n;i++){
        cout<<v3[i]<<"  ";
    }
    return 0;
}
