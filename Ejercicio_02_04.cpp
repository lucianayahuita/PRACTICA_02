// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Numero de ejericio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
//el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
//Las edades al azar deben ser generadas a partir de 1 a 110 años.
#include <iostream>

using namespace std;
#include <time.h>
int main(){
    int v[50];
    int mayores=0, menores=0;
    srand(time(0)); //asegura que los valores sean realmente aleatorios
    for(int i=0;i<50;i++){
        v[i]=1+rand()%110; //para generar edades entre 1 y 110
        if (v[i]>=18){
            mayores++;
        }
        else if (v[i]<18){
            menores++;
        }
    }
    for(int i=0;i<50;i++){
        cout<<v[i]<<"  ";
    }
    float porcentajemayores = (static_cast<float>(mayores) / 50) * 100;
    float porcentajemenores = (static_cast<float>(menores) / 50) * 100;

    cout<<"El numero de menores es: "<<menores;
    cout<<"El numero de mayores es: "<<mayores;
    cout<<"El procentaje de mayores es: "<<porcentajemayores;
    cout<<"El procentaje de menores es: "<<porcentajemenores;
    return 0;
}
