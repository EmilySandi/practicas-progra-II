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

    Automovil(string placa, string modelo) : Vehiculo(placa, modelo) {}

    string mostrar(){
        return "Automovil Modelo: " + modelo + " Placa: " + placa;
    }
    
    ~Automovil(){}
};


int main() {

    //Ejercicio 1

    Vehiculo* vehiculo1 = new Automovil("Toyota Supra", "EMY007");
    Automovil* automovil1 = dynamic_cast<Automovil*>(vehiculo1);

    if (automovil1 != nullptr) {
        cout << automovil1->mostrar() << endl;
    } else {
        cout << "Dynamic cast fallido" << endl;
    }
    delete vehiculo1;
    
    //Ejercicio 2

    Vehiculo* vehiculo2 = new Vehiculo("DAV000", "Mini Cooper");
    Automovil* automovil2 = dynamic_cast<Automovil*>(vehiculo2);

    if (automovil2 != nullptr) {
        cout << "Ejercicio 2: " << automovil2->mostrar() << endl;
    } else {
        cout << "Ejercicio 2: Dynamic cast fallido" << endl;
    }

    return 0;
}
