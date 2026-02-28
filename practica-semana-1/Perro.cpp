#include "Perro.h"

Perro::Perro(string nombre) : Mamifero(nombre){}

string Perro::ladrar()
{
    return "Guau!! Guau!!";
}

Perro::~Perro(){}
