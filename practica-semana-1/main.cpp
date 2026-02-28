#include <iostream>
#include "Perro.h"
using namespace std;

int main()
{
    // Actividad 1 (relaciones y upcast)
    cout << "Actividad 1 (relaciones y upcast) \n" << endl;

    Perro* perro1 = new Perro("Rufus");
    Animal* animal1 = perro1;
    Mamifero* mamifero1 = perro1;

    cout << "LLamado a getNombre desde Perro*: " << perro1->getNombre() << endl;
    cout << "LLamado a getNombre desde Mamifero*: " << mamifero1->getNombre() << endl;
    cout << "LLamado a getNombre desde Animal*: " << animal1->getNombre() << endl;

    delete perro1;

    // Actividad 2 (downcast)

    cout << "\n\nActividad 2 (downcast)" << endl;

    Animal* animal2 = new Perro("Rocky");
    Animal* animal3 = new Mamifero("Perry el Ornitorrinco");
    Perro* perro2 = dynamic_cast<Perro*>(animal2);
    Perro* perro3 = dynamic_cast<Perro*>(animal3);

    if (perro2 != nullptr) {
        cout << "Dynamic cast de Animal*(Perro) a Perro* exitoso:\nLLamado a metodo ladrar: " << perro2->ladrar() << endl;
    } else {
        cout << "Dynamic cast de Animal*(Perro) a Perro* fallido" << endl;
    }

    if (perro3 != nullptr) {
        cout << "Dynamic cast de Animal*(Mamifero) a Perro* exitoso:\nLLamado a metodo ladrar: " << perro3->ladrar() << endl;
    } else {
        cout << "Dynamic cast de Animal*(Mamifero) a Perro* fallido" << endl;
    }

    delete perro1;
    delete animal2;
    delete animal3;

    return 0;
}