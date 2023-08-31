// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 17
// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
//(comprendidas entre 0 y 100). A continuaci�n, debe mostrar todas las notas, la nota media, la
//nota m�s alta que ha sacado y la menor.
#include <iostream>
using namespace std;
int main(){
    float vn[5];//el vector que almacena las notas
    float sumanotas=0.0, media;
    for (int i=0;i<5;i++){
        cout<<"Ingresa la nota"<<endl;
        cin>>vn[i];
        cout<<vn[i];
        sumanotas+=vn[i];
    }
    media=sumanotas/5;
    cout<<"La media de las notas es: "<<media<<"\n";
    //para encontrar la mayor y menor nota
    int menornota=vn[0];
    int mayornota=vn[0];
    for (int i=0;i<5;i++){
        if (vn[i]>mayornota){
            mayornota=vn[i];
        }
        if (vn[i]<menornota){
            menornota=vn[i];
        }
    }
    cout<<"La mayor nota es: "<<mayornota<<endl;
    cout<<"La menor nota es: "<<menornota<<endl;
    return 0;
}

