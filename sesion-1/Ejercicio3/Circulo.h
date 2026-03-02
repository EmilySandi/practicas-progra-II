#include <iostream>
#include <cmath>
#include "Figura.h"
using namespace std;
class Circulo : public Figura
{
protected:
    double radio;
public:
    Circulo(double radio);
    double area () const override;
    double getRadio();
    void setRadio(double radio);
    ~Circulo();
};