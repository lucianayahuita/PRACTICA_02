// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 29/08/2023
// Fecha modificación: 29/08/2023
// Numero de ejericio: 9
// Problema planteado: - Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
//arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
//nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
//desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string> // PARA ASEGURAR EL dato string

using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de estudiantes" << endl;
    cin >> n;
    float v1[n];
    string v2[n];
    string v3[n];
    // Pedir calificaciones, nombres y siglas de carrera
    for (int i = 0; i < n; i++) {
        cout << "Ingrese su calificacion" << endl;
        cin >> v1[i];
        cout << "Ingrese su nombre" << endl;
        cin >> v2[i];
        cout << "Ingrese su SIGLA a la carrera que pertenece p.e INGENIERIA DE SISTEMAS ISIS" << endl;
        cin >> v3[i];
    }
    int indiceMenor = 0; //Indice del estudiante con menor puntuacion
    int indiceMayor = 0; // Índice del estudiante con la mayor puntuación
    for (int i = 1; i < n; i++) {
        if (v1[i] > v1[indiceMayor]) {
            indiceMayor = i;
        }
        if (v1[i]< v1[indiceMenor]){
            indiceMenor = i;
        }
    }
    // Calcular el promedio del curso
    float sumaCalificaciones = 0.0;
    for (int i = 0; i < n; i++) {
        sumaCalificaciones += v1[i];
    }
    float promedioCurso = sumaCalificaciones / n;
    string carreraMejorDesempeno;
    float mejorDesempeno = promedioCurso;
    // Encontrar la carrera con mejor desempeño
    for (int i = 0; i < n; i++) {
        if (v1[i] > promedioCurso && v1[i] > mejorDesempeno) {
            mejorDesempeno = v1[i];
            carreraMejorDesempeno = v3[i];
        }
    }
    cout << "Estudiante con la mayor calificacion: " << v2[indiceMayor] << endl;
    cout << "Estudiante con la menor calificacion: " << v2[indiceMenor] << endl;
    cout << "Carrera con mejor desempeno: " << carreraMejorDesempeno << endl;
    return 0;
}

