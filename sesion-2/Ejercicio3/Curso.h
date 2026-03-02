#include <string>
using namespace std; 
class Estudiante;
class Curso
{
    Estudiante* estudiante;
public:
    Curso();
    string asignarEstudiante(Estudiante* estudiante);
    Estudiante* getEstudiante() const;
};

