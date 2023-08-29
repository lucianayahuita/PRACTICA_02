// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 28/08/2023
// Fecha modificación: 29/08/2023
// Número de ejericio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
//los componentes de índice par y la resta de los componentes de índice impar.
#include <iostream>

using namespace std;
#include <time.h>
int main(){
    int n, lim_A, lim_B, C, sumapares=0, restaimpares=0;
    cout<<"Ingrese el tamaño del vector"<<endl;
    cin>>n;
    cout<<"Ingrese el limite A"<<endl;
    cin>>lim_A;
    cout<<"Ingrese el limite B"<<endl;
    cin>>lim_B;
    C=lim_B-lim_A;
    int v[n];
    srand(time(0)); //asegura que los valores sean realmente aleatorios
    for(int i=0;i<n;i++){
         v[i]=rand()%C+lim_A; //generar valores aleatorios en ese rango
         if (v[i]%2==0){
            sumapares+=v[i];
         }
         if (v[i]%2!=0){
            restaimpares=restaimpares-v[i];
         }
    }
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"La suma de los elementos pares es: "<<sumapares;
    cout<<"La resta de los elementos impares es: "<<restaimpares;
    return 0;
}
