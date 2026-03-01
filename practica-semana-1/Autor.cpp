#include "Autor.h"
#include "Libro.h"

Autor::Autor(string nombre) {
    this->nombre = nombre;
}

string Autor::getNombre() {
    return nombre;
}

Libro** Autor::getLibros() {
    return libros;
}

void Autor::setLibros(Libro** libros) {
    this->libros = libros;
}

Autor::~Autor() {}
