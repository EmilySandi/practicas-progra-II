#include <iostream>
#include"Curso.h"
#include"Estudiante.h"
using namespace std;

int main(){
    Estudiante* estudiante1 = new Estudiante;
    Curso* curso1 = new Curso;

    estudiante1->asignarCurso(curso1);
    curso1->asignarEstudiante(estudiante1);

    if (estudiante1->getCurso() == curso1){
        cout<< "El Estudiante esta correctamente agregado al grupo" << endl;
    }
    if (curso1->getEstudiante() == estudiante1)
    {
        cout<< "El Curso tiene asignado al Estudiante correctamente" << endl;
    }else {
        cout<< "Programa Fallido" << endl;
    }
    return 0;
}