#include <iostream>
using namespace std;

class Rectangulo{
  private:	
    double ancho;
    double largo;
    string color;

  public:	
    Rectangulo();	
    double perimetro();	
    double area();
    void estDatos(double aa, double ll, string cc);	
    void mostrarDatos();
};


