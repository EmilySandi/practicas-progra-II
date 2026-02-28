#include "Animal.h"

Animal::Animal(string nombre)
{
    this->nombre = nombre;
}

string Animal::getNombre()
{
    return this->nombre;
}

void Animal::setNombre(string nombre){
    this->nombre = nombre;
}

Animal::~Animal(){}
