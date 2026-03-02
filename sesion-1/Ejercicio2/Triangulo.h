#pragma once
#include <string>
#include "Poligono.h"
using namespace std;

class Triangulo : public Poligono
{
public:
    Triangulo(string nombre);
    string describir();
    ~Triangulo();
};