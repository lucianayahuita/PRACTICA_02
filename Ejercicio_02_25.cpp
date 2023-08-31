// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 25
// Problema planteado: Genere un vector de N elementos y ll�nelos aleatoriamente entre valores de 1 a 100 e
//indique el mayor elemento, el menor elemento y el promedio.
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;
int main() {
    int n;
    cout<<"Ingrese cuantos elementos quiere en su vector"<<endl;
    cin>>n;
    int v[n];
    float suma=0.0, promedio=0.0;
    srand(time(0));
    for(int i=0;i<n;i++){
        v[i]=rand()%100+1; //(genera valores aleatorios del 100 al 1)
        suma+=v[i];
    }
    promedio=suma/n;
    for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }
    int mayor=v[0];
    int menor=v[0];
    for (int i=0;i<n;i++){
        if(v[i]<menor){
            menor=v[i];
        }
        if (v[i]>mayor){
            mayor=v[i];
        }
    }
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    return 0;
}

