#include <iostream>

using namespace std;

/**Hacer un programa en el que se ingrese un n�mero real y que se muestre si el n�mero es positivo, negativo o cero.
 Adicionalmente deber� indicar si es natural, entero o real. Ejemplo:

Ingrese un n�mero: 13.4
El n�mero es positivo y real.
*/

int main()
{   double numero;
    cout<< "Ingrese un numero: ";
    cin>> numero;

    if (numero >= 1 ){
        cout<< "El numero es positivo y naturales";
    }
    else if (numero <= -1){
        cout<< "El numero es negativo y enteros ";
    }
    else {
        cout<< "El numero es cero y real";
    }




    return 0;
}
