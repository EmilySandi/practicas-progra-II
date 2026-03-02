#include <iostream>
#include "Triangulo.h"
using namespace std;

int main()
{
    cout << "Actividad 1 (relaciones y upcast) \n" << endl;

    Triangulo* triangulo1 = new Triangulo("equilatero");
    Figura* figura1 = triangulo1;
    Poligono* poligono1 = triangulo1;

    cout << "LLamado a getNombre desde Triangulo*: " << triangulo1->getNombre() << endl;
    cout << "LLamado a getNombre desde Poligono*: " << poligono1->getNombre() << endl;
    cout << "LLamado a getNombre desde Figura*: " << figura1->getNombre() << endl;

    delete triangulo1;

}
