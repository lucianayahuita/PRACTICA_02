// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Numero de ejericio: 6
// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos
//intercalados.
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Ingrese el tamano para los vectores"<<endl;
    cin>>n;
    int v1[n];
    int v2[n];
    int v3[n+n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor para almacenar en el vector 1"<<endl;
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor para almacenar en el vector 2"<<endl;
        cin>>v2[i];
    }
    for (int i=0;i<n;i++){
        v3[2 * i] = v1[i];       // Elemento del arreglo 1 en posición par
        v3[2 * i + 1] = v2[i];
    }

    for (int i = 0; i < 2 * n; ++i) {
        cout << v3[i] << " ";
    }
    return 0;
}
