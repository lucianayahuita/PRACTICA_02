// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
//diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
//simplificarlo vamos a suponer que febrero tiene 28 días.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    string vmes[]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int vdias[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout<<"Ingresa un numero que corresponda al mes: ej de Abril seria 4"<<endl;
    cin>>num;
    if (num==1){
        cout<<vmes[0]<<" tiene "<<vdias[0]<<" dias";
    }
    if (num==2){
        cout<<vmes[1]<<" tiene "<<vdias[1]<<" dias";
    }
    if (num==3){
        cout<<vmes[2]<<" tiene "<<vdias[2]<<" dias";
    }
    if (num==4){
        cout<<vmes[3]<<" tiene "<<vdias[3]<<" dias";
    }
    if (num==5){
        cout<<vmes[4]<<" tiene "<<vdias[4]<<" dias";
    }
    if (num==6){
        cout<<vmes[5]<<" tiene "<<vdias[5]<<" dias";
    }
    if (num==7){
        cout<<vmes[6]<<" tiene "<<vdias[6]<<" dias";
    }
    if (num==8){
        cout<<vmes[7]<<" tiene "<<vdias[7]<<" dias";
    }
    if (num==9){
        cout<<vmes[8]<<" tiene "<<vdias[8]<<" dias";
    }
    if (num==10){
        cout<<vmes[9]<<" tiene "<<vdias[9]<<" dias";
    }
    if (num==11){
        cout<<vmes[10]<<" tiene "<<vdias[10]<<" dias";
    }
    if (num==12){
        cout<<vmes[11]<<" tiene "<<vdias[11]<<" dias";
    }
    return 0;
}

