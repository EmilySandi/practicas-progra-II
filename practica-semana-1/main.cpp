#include <iostream>
#include "Perro.h"
#include "Libro.h"
#include "Autor.h"
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

    delete animal2;
    delete animal3;

    // Actividad 3 (dependencia mutua)

    cout << "\n\nActividad 3 (dependencia mutua)" << endl;

    Autor* autor1 = new Autor("Gabriel Garcia Marquez");
    Autor* autor2 = new Autor("Stephen King");
    Libro* libro1 = new Libro("It", autor2);
    Libro* libro2 = new Libro("La Torre Oscura", autor2);
    Libro* libro3 = new Libro("Cien Anios de Soledad", autor1);
    Libro* libro4 = new Libro("Cronicas de una Muerte Anunciada", autor1);

    Libro** libros1 = new Libro*[2];
    Libro** libros2 = new Libro*[2];

    libros1[0] = libro3;
    libros1[1] = libro4;    
    libros2[0] = libro1;
    libros2[1] = libro2;

    autor1->setLibros(libros1);
    autor2->setLibros(libros2);

    cout << "Dependencia Circular entre Autor y Libro resuelta. Autores de prueba "
         << autor1->getNombre() << " y " << autor2->getNombre() << " creados exitosamente.";

    delete libros1;
    delete libros2;
    delete autor1;
    delete autor2;
    delete libro1;
    delete libro2;
    delete libro3;
    delete libro4;

    return 0;
}
