#include "Rectanguloheaders.hpp"

using namespace std;

Rectangulo::Rectangulo() {
    ancho = 10.0;
    largo = 10.0;
    color = "negro";
}

double Rectangulo::perimetro(){return(ancho*2 +  largo*2);}

double Rectangulo::area(){return(ancho*largo);}

void Rectangulo::estDatos(double aa, double ll, string cc){
    ancho = aa;
    largo = ll;
    color=cc;
}

void Rectangulo::mostrarDatos(){
    cout << "Rectangulo: " << endl 
    << "  largo: " << largo
    << "  ancho: " << ancho
    << "  color: " << color
    << "  perimetro: " << perimetro()
    << "  area: " << area()
    << endl;
}
