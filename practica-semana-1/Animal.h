
#pragma once
#include <string>
using namespace std;

class Animal {
protected:
    string nombre;
public:
    Animal(string nombre);
    string getNombre();
    void setNombre(string nombre);
    virtual ~Animal();
};
