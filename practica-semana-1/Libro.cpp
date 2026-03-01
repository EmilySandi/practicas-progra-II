#include "Libro.h"
#include "Autor.h"

Libro::Libro(string titulo, Autor* autor) {
    this->titulo = titulo;
    this->autor = autor;
}

string Libro::getTitulo() {
    return titulo;
}

Autor* Libro::getAutor() {
    return autor;
}

Libro::~Libro() {}
