#include <string>
#include "Curso.h"
#include "Estudiante.h"
using namespace std;

Estudiante::Estudiante() : curso(nullptr){

}

string Estudiante::asignarCurso(Curso* curso)
{
    this->curso = curso;
    return "Curso asignado Correctamente";
}
    Curso* Estudiante::getCurso() const{
    return this->curso;
}