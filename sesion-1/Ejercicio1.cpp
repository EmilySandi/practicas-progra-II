#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string placa;
    string modelo;

public:
    Vehiculo(string placa, string modelo){
        this->placa = placa;
        this->modelo = modelo; 
    }
    virtual string mostrar(){
        return "Vehiculo Modelo: " + modelo + " Placa: " + placa;
    }

    virtual ~Vehiculo(){}
};

class Automovil : public Vehiculo {
public:

    Automovil(string modelo, string placa) : Vehiculo(modelo, placa) {}

    string mostrar(){
        return "Automovil Modelo: " + modelo + " Placa: " + placa;
    }
    
    ~Automovil(){}
};


int main() {
    Vehiculo* vehiculo1 = new Automovil("Toyota Supra", "EMY007");

  /*
    Este upcast es seguro porque Automovil es un Vehículo, por lo tanto, puede
    comportarse como un Vehiculo en un puntero de este tipo. Si Automovil no
    heredara de Vehículo, este código no compilaría
  */

    cout << vehiculo1->mostrar();
    delete vehiculo1;

    return 0;
}
