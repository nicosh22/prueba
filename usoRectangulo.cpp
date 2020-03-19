
#include "Rectangulo.cpp"

using namespace std;

int main()
{
   Rectangulo rect1;		//creacion de objeto rect1
   rect1.mostrarDatos();	//utilizacion de procedimiento mostrar datos de rect1 (los muestra por pantalla),si no
   							//se establecieron datos anteriormente, inicializa con los valores del constructor
   
   rect1.estDatos(20.20, 10.10, "verde");	//se establecen nuevos atributos para rect1
   rect1.mostrarDatos();	//muestra por pantalla los nuevos datos ingresados en rect1

   Rectangulo rect2;	//se crea un nuevo objeto rect2
   double l,a;		//declaracion de variables doubles "l" y "a"
   string c;		//declaracion de variable string "c"

   cout << "Establecer largo: ";	//Se pide al usuario que ingrese por teclado el largo,ancho y color 								
   cin >> l ;						//para almacenar en la variable "l","a" y "c" respectivamente
   cout << "Establecer ancho: ";
   cin >> a ;
   cout << "Establecer color: ";
   cin >> c ;

   rect2.estDatos(a,l,c);	//se establecen largo,ancho y color ingresados por el usuario en objeto rect2
   rect2.mostrarDatos();	//se muestra por pantalla los datos de rect2

   return 0;
}