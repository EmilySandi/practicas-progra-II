#include <string>
using namespace std;

class Autor;

class Libro {
private:
    string titulo;
    Autor* autor;

public:
    Libro(string titulo, Autor* autor);
    string getTitulo();
    Autor* getAutor();
    ~Libro();
};
