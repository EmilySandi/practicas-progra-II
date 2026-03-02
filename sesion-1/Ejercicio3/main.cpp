#include <iostream>
#include "Circulo.h"
#include "Rectangulo.h"

using namespace std;
int main()
{
 const int MAX = 10;
 Figura* figuras[MAX];
 int cantidad = 0;

 figuras [cantidad++] = new Circulo (5);
 figuras [cantidad++] = new Rectangulo(4, 6);
 figuras [cantidad++] = new Circulo(3);

 for (int i = 0; i < cantidad; i++)
 {
  cout << "Area de la Figura" << i + 1 << ":" << figuras[i]->area() << endl;
 }
 for (int i = 0; i < cantidad; i++)
 {
  delete figuras[i];
 }
 return 0;
}