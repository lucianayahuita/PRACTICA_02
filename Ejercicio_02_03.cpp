// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Numero de ejericio: 3
// Problema planteado:Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
//rango de A - B y determine cuántos de estos elementos son números primos.
#include <iostream>

using namespace std;
#include <time.h>
int main(){
    int v[50];
    int A, B, C, primos=0;
    srand(time(0)); //asegura que los valores sean realmente aleatorios
    cout<<"Introduce el primer valor"<<endl;
    cin>>A;
    cout<<"Introduce el segundo valor"<<endl;
    cin>>B;
    C=B-A;
    for(int i=0;i<50;i++){
        v[i]=rand()%C+A; //generar valores aleatorios en ese rango
        bool esPrimo=true;
        if (v[i] <= 1) {
            esPrimo = false;
        }
        for (int j = 2; j * j <= v[i]; j++) {
            if (v[i] % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            primos++;
        }

    }
    for (int i=0;i<50;i++){
        cout<<v[i]<<" ";
    }
    cout<<"El contador de numeros primos en ese rango es: "<<primos<<endl;
    return 0;
}
