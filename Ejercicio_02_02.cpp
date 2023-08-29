// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Numero de ejericio: 2
// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
//determine el porcentaje de números pares positivos e impares negativos.
#include <iostream>

using namespace std;

int main(){
    int v[10];
    int contnumparespos=0, contnumimparesneg=0;
    for (int i=0;i<10;i=i+1){
        cout<<"Introduce un valor"<<endl;
        cin>>v[i];
        if (v[i]>0 && v[i]%2==0){
            contnumparespos++;
        }
        if (v[i]<0 && v[i]%2!=0){
            contnumimparesneg++;
        }
    }
    float porcentajeParesPos = (static_cast<float>(contnumparespos) / 10) * 100;
    float porcentajeImparesNeg = (static_cast<float>(contnumimparesneg) / 10) * 100;
    cout<<"El porcentaje de los numeros impares es: "<<porcentajeParesPos;
    cout<<"El porcentaje de los numeros impares es: "<<porcentajeImparesNeg;
    return 0;
}
