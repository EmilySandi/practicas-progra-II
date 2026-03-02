#include <iostream>
#include <cmath>
#include "Figura.h"
using namespace std;
class Rectangulo : public Figura
{
protected:
    int base;
    int altura;
public:
    Rectangulo(int base, int altura);
    double area () const override;
    int getaltura();
    int getbase();
    void setaltura(int altura);
    void setbase(int base);
    ~Rectangulo();
};