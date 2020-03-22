
#include "RectanguloFuncs.cpp"

using namespace std;

int main(){
   Rectangulo rect1;		
   rect1.mostrarDatos();
   							
   rect1.estDatos(20.20, 10.10, "verde");
   rect1.mostrarDatos();

   Rectangulo rect2;
   double l,a;
   string c;

   cout << "Establecer largo: ";								
   cin >> l ;				
   cout << "Establecer ancho: ";
   cin >> a ;
   cout << "Establecer color: ";
   cin >> c ;

   rect2.estDatos(a,l,c);
   rect2.mostrarDatos();	

   return 0;
}