//#include <iostream>
#include "Rectangulo.hpp"

using namespace std;


/* seccion de implementacion */

  //funciones y procedimientos (METODOS) pertenecientes clase Rectangulo

  Rectangulo::Rectangulo()  //implementacion del constructor: utilizado para inicializar valores de atributos
  {
      ancho = 10.0;
      largo = 10.0;
      color = "negro";
  }

  double Rectangulo::perimetro()    //funcion perimetro: calcula y retorna resultado tipo double
  {
      return(ancho*2 +  largo*2);
  }

  double Rectangulo::area()   //funcion area: calcula y retorna resultado tipo double
  {
      return(ancho*largo);
  }

  void Rectangulo::estDatos(double aa, double ll, string cc)  //procedimiento establecer datos: recibe como argumentos ancho,largo y color
  {
      ancho = aa;   //asignacion a atributos privados de la clase los argumentos recibidos ancho,largo y color respectivamente
      largo = ll;
      color=cc;
  }

  void Rectangulo::mostrarDatos()   //procedimiento mostrar datos
  {
      cout << "Rectangulo: " << endl    //muestra por pantalla los datos del rectangulo
           << "  largo: " << largo
           << "  ancho: " << ancho
           << "  color: " << color
           << "  perimetro: " << perimetro()
           << "  area: " << area()
           << endl;
  }
