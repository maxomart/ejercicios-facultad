#include <iostream>

using namespace std;

/**Armar un programa que solicite al usuario que ingrese el DNI de 3 personas y sus respectivas edades.
 A continuación, el programa deberá indicar el DNI del más joven y el del más viejo. Ejemplo (considerarlo como caso de prueba):

Ingrese el primer DNI: 34567890
Ingrese la edad del DNI 34567890: 18
Ingrese el segundo DNI: 27998765
Ingrese la edad del DNI 27998765: 30
Ingrese el tercer DNI: 90222333
Ingrese la edad del DNI 90222333: 45
El más joven es la persona del DNI 34567890.
El más viejo es la persona del DNI 90222333.
*/


int main()
{
    unsigned int dni1, dni2, dni3, edad1, edad2, edad3;

    cout<< "Ingrese el primer DNI: ";
        cin>> dni1;
    cout<< "Ingrese la edad del DNI " << dni1 << ": ";
        cin>> edad1;
    cout<< "Ingrese el segundo DNI: ";
        cin>> dni2;
    cout<< "Ingrese la edad del DNI " << dni2 << ": ";
        cin>> edad2;
    cout<< "Ingrese el tercer DNI: ";
        cin>> dni3;
    cout<< "Ingrese la edad del DNI " << dni3 << ": ";
        cin>> edad3;



     int dni_mas_joven = dni1;
    if (edad2 < edad1 && edad2 < edad3) {
        dni_mas_joven = dni2;
    } else if (edad3 < edad1 && edad3 < edad2) {
        dni_mas_joven = dni3;
    }


    cout<< "El más joven es la persona del DNI " << dni_mas_joven << "." << endl;

    return 0;
}
