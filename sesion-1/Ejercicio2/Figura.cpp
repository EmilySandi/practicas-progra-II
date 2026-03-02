#include "Figura.h"

Figura::Figura(string nombre)
{
    this->nombre = nombre;
}

string Figura::getNombre()
{
    return this->nombre;
}

void Figura::setNombre(string nombre){
    this->nombre = nombre;
}

Figura::~Figura(){}
