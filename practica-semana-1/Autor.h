
#include <string>
using namespace std;

class Libro;

class Autor {
private:
    string nombre;
    Libro** libros;

public:
    Autor(string nombre);
    string getNombre();
    Libro** getLibros();
    void setLibros(Libro** libros);
    ~Autor();
};
