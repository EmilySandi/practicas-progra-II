#include "Triangulo.h"

Triangulo::Triangulo(string nombre) : Poligono(nombre){}

string Triangulo::describir()
{
    return "Tengo 3 lados";
}

Triangulo::~Triangulo(){}
