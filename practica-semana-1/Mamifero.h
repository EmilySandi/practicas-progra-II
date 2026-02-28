#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class Mamifero : public Animal
{
public:
    Mamifero(string nombre);
    ~Mamifero();
};