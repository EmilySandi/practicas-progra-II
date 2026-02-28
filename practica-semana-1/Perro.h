#pragma once
#include <string>
#include "Mamifero.h"
using namespace std;

class Perro : public Mamifero
{
public:
    Perro(string nombre);
    string ladrar();
    ~Perro();
};