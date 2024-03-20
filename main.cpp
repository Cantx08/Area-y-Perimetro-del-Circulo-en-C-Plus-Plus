#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "03 Programa que calcula el area  y perimetro de un circulo" << endl;
    float radio, perimetro, area;

    // Ingresar la longitud del radio del círculo.
    // Nota: El radio debe tener una longitud mayor a 0!
    cout << "Ingrese la longitud del radio (en cm): ";
    cin >> radio;


    // Calcular el perímetro del círculo.
    perimetro = 2 * M_PI * radio;
    area = M_PI * pow(radio, 2);

    // Mostrar el resultado en consola.
    cout << "El perimetro del circulo es: " << perimetro << " cm." << endl;
    cout << "El area del circulo es: " << area << " cm^2.";
    return 0;
}
