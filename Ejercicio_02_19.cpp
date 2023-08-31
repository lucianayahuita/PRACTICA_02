// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 19
// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
//ordene los elementos de menor a mayor
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;
int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros aleatorios"<<endl;
    cin>>n;
    srand(time(0));
    int v[n];
    for(int i=0;i<n;i++){
        v[i]=rand()%n+1; //(genera valores aleatorios del numero ingresado hasta l
        cout<<v[i]<<"  ";
    }
    int mayor=v[0];
    int menor=v[0];
    for (int i=0;i<n;i++){
        if (v[i]<menor){
            menor=v[i];
        }
        if (v[i]>mayor){
            mayor=v[i];
        }
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    cout<<"El menor numero es: "<<menor<<endl;
    return 0;
}
