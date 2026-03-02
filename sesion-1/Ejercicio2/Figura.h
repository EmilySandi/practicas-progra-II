
#pragma once
#include <string>
using namespace std;

class Figura {
protected:
    string nombre;
public:
    Figura(string nombre);
    string getNombre();
    void setNombre(string nombre);
    virtual ~Figura();
};
