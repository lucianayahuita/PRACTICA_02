// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Numero de ejericio: 5
// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
//240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.
#include <iostream>

using namespace std;
#include <time.h>
int main(){
    int n;
    float estaturas=0;
    cout<<"Ingrese el numero de personas N"<<endl;
    cin>>n;
    int v[n];
    srand(time(0)); //asegura que los valores sean realmente aleatorios
    for (int i=0;i<n;i++){
        v[i]=50+rand()%192; //para generar estaturas entre 50 a 240
        estaturas+=v[i];
    }
    int mayor=v[0];
    int menor=v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }
    float promedio=estaturas/n;
    cout<<"El promedio de estaturas es: "<<promedio<<endl;
    cout<<"Las mayor estatura es: "<<mayor<<endl;
    cout<<"La menor estatura es: "<<menor<<endl;
    return 0;
}
