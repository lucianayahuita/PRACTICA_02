// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 22
// Problema planteado: Leer 2 vectores de dimensi�n N y calcule la multiplicaci�n de los mismos en otro vector.
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
