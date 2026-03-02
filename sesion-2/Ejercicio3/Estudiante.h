
#include <string>
using namespace std;
class Curso;
class Estudiante{
protected:
    Curso* curso;
public:
    Estudiante();
    string asignarCurso(Curso* curso);
    Curso* getCurso() const;
};
