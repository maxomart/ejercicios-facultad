#include <iostream>

using namespace std;
/***Realizar un programa que solicite, para 3 autos, la distancia recorrida (en metros) y el tiempo que tardó en recorrer dicho trayect
o (en segundos). Ambas magnitudes deben expresarse en números reales. El programa deberá calcular y mostrar la velocidad promedio
 en km/h y a qué auto corresponde, en orden decreciente. Ejemplo:

Ingrese la distancia recorrida por el auto 1: 200
Ingrese el tiempo del auto 1: 15
Ingrese la distancia recorrida por el auto 2: 180
Ingrese el tiempo del auto 2: 12
Ingrese la distancia recorrida por el auto 3: 400
Ingrese el tiempo del auto 3: 27.5

Resultado:
Auto 2 = 54 Km/h
Auto 3 = 52.36 Km/h
Auto 1 = 48 Km/h
*/



int main()
{
    unsigned int recorido1, recorido2, recorido3;
    float tiempo1, tiempo2, tiempo3;

    cout<< "Ingrese la distacia recorrida por el auto 1: ";
    cin>> recorido1;
    cout<< "Ingrese el tiempo del auto 1: ";
    cin>> tiempo1;
    cout<< "Ingrese la distacia recorrida por el auto 2: ";
    cin>> recorido2;
    cout<< "Ingrese el tiempo del auto 2: ";
    cin>> tiempo2;
    cout<< "Ingrese la distacia recorrida por el auto 3: ";
    cin>> recorido3;
    cout<< "Ingrese el tiempo del auto 3: ";
    cin>> tiempo3;


    double velocidad1= recorido1 / tiempo1;
    double velocidad2= recorido2 / tiempo2;
    double velocidad3= recorido3 / tiempo3;

    cout<< "resultado: " << endl;


    if (velocidad1 > velocidad2 && velocidad1 > velocidad3) {
        cout << "Auto 1 = " << velocidad1 << " Km/h" << endl;
        if (velocidad2 > velocidad3) {
            cout << "Auto 2 = " << velocidad2 << " Km/h" << endl;
            cout << "Auto 3 = " << velocidad3 << " Km/h" << endl;
        } else {
            cout << "Auto 3 = " << velocidad3 << " Km/h" << endl;
            cout << "Auto 2 = " << velocidad2 << " Km/h" << endl;
        }
    } else if (velocidad2 > velocidad1 && velocidad2 > velocidad3) {
        cout << "Auto 2 = " << velocidad2 << " Km/h" << endl;
        if (velocidad1 > velocidad3) {
            cout << "Auto 1 = " << velocidad1 << " Km/h" << endl;
            cout << "Auto 3 = " << velocidad3 << " Km/h" << endl;
        } else {
            cout << "Auto 3 = " << velocidad3 << " Km/h" << endl;
            cout << "Auto 1 = " << velocidad1 << " Km/h" << endl;
        }
    } else {
        cout << "Auto 3 = " << velocidad3 << " Km/h" << endl;
        if (velocidad1 > velocidad2) {
            cout << "Auto 1 = " << velocidad1 << " Km/h" << endl;
            cout << "Auto 2 = " << velocidad2 << " Km/h" << endl;
        } else {
            cout << "Auto 2 = " << velocidad2 << " Km/h" << endl;
            cout << "Auto 1 = " << velocidad1 << " Km/h" << endl;
        }
    }







    return 0;
}
