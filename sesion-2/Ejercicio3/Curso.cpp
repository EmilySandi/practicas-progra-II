
#include "Curso.h"
#include "Estudiante.h"

Curso::Curso(): estudiante (nullptr){

}

string Curso::asignarEstudiante(Estudiante* estudiante)
{
    this->estudiante = estudiante;
    return "Estudiante asignado correctamente";
}
Estudiante* Curso::getEstudiante() const{
    return this->estudiante;
}