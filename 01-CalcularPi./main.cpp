#include <iostream>
#include <iomanip> // para usar setprecision
#include <cmath> // funciones matematicas. se incluye para poder usar abs.

using namespace std;

long double Leibniz () { 

    double pi = 0.0 ; 
    int signo = 1 ;
    int denominador = 1 ; 
    double precision = 0.0000001 ; // para que den con exactitud los decimales
    int iteracionesMax = 1000000 ;// Limite de iteraciones para evitar un bucle infinito
    int iteraciones = 0 ; 

    while ((abs(pi - (3.141592 / 4))) > precision && iteraciones <= iteracionesMax ) { // abs: valor absoluto. Se ejecuta hasta que la aproximacion de pi alcance la precision de los decimales 
  
      pi += signo * (1.0 / denominador); 

      signo *= -1;

      denominador += 2;

      iteraciones ++ ;
    }

    cout << "Fueron necesarias " << iteraciones << " iteraciones para encontrar el valor de pi" << endl;

    return pi * 4.0;
    // Se multiplica pi*4.0 ya que la serie converge a pi/4
}

int main () {

  double pi = Leibniz (); 

   cout << "El valor aproximado de pi es: " << setprecision(6) << fixed << pi << endl;
    return 0;
}
