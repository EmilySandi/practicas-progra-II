#pragma once
#include <string>
#include "Figura.h"
using namespace std;

class Poligono : public Figura
{
public:
    Poligono(string nombre);
    ~Poligono();
};