// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese el tamano para la dimension de los 2 vectores"<<endl;
    cin>>n;
    int v1[n];
    int v2[n];
    int v3[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor para el primer vector"<<endl;
        cin>>v1[i];
        cout<<"Ingrese el valor para el segundo vector"<<endl,
        cin>>v2[i];
    }
    for (int i=0;i<n;i++){
        v3[i]=v1[i]*v2[i];
    }
    for (int i=0;i<n;i++){
        cout<<v3[i]<<"  ";
    }
    return 0;
}
