#include <iostream>
#include "Circulo.h"

Circulo::Circulo(double radio){
    this->radio = radio;
}
double Circulo::area() const{
    return 3.14 * radio * radio;
}
double Circulo::getRadio(){
    return radio;
}
void Circulo::setRadio(double radio){
    this->radio = radio;
}
Circulo::~Circulo(){}