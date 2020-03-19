#include <iostream>
using namespace std;

//seccion de declaracion de Clase

class Rectangulo{	//creacion de clase Rectangulo
  private:			//declaracion de miembros privados:
    double ancho;	//atributos privados: color (cadena de caracteres), ancho y largo (reales)
    double largo;
    string color;

  public:			//declaracion de miembros publicos
    Rectangulo();		//declaracion de metodo constructor de la clase
    double perimetro();		// funciones perimetro y area
    double area();
    void estDatos(double aa, double ll, string cc);		//procedimientos: estDatos y mostrarDatos
    void mostrarDatos();
};


