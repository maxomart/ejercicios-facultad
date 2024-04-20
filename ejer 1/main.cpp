#include <iostream>

using namespace std;

/**Hacer un programa en el que se ingresen 2 números enteros por teclado y se imprima un mensaje que indique si el primero ingresado es divisible por el segundo ingresado. Ejemplo:

Ingrese un número: 16
Ingrese divisor: 4
16 es divisible por 4

*/

int main()
{
        int numero, divisor;

    cout<< "Ingrese un numero: ";
        cin>> numero;

    cout<< "Ingrese un divisor: ";
        cin>> divisor;


    if (divisor != 0 && numero % divisor == 0){
        cout<< numero << " es divicible por " << divisor <<endl;
    } else {
        cout<< numero<< " no es divisible por " << divisor << endl;
    }


    return 0;
}
