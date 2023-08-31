// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 15
// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
//valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
//junto con su cuadrado y su cubo.
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
#include <cmath>
using namespace std;
int main(){
    int v[10];
    int v2[10];
    int v3[10];
    cout<<"Generando valores aleatorios dentro de ese rango"<<endl;
    srand(time(0));
    for (int i=0;i<10;i++){
        v[i]=rand()%10+1; //(genera valores aleatorios del 10 al 1)
        cout<<v[i];
        v2[i]=pow(v[i], 2); //para los cuadrados
        v3[i]=pow(v[i], 3); //para los cubos
    }
    cout<<"Cada elemento junto con su cuadrado y su cubo"<<endl;
    for (int i=0; i<10; i++){
        cout << v[i] << " -> " << v2[i]<<" -> "<<v3[i]<< endl;
    }
    return 0;
}
