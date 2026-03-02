#include "Rectangulo.h"
using namespace std;

Rectangulo::Rectangulo(int base, int altura)
{
    this->base = base;
    this->altura = altura;
}


    double Rectangulo::area () const{
        return base * altura;
    }

    int Rectangulo::getbase(){
        return base;
    }
    int Rectangulo::getaltura(){
        return altura;
    }
    void Rectangulo::setbase(int base){
        this->base = base;
    }
    void Rectangulo::setaltura(int altura){
        this->altura = altura;
    }

    Rectangulo::~Rectangulo(){}