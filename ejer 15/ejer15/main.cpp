#include <iostream>

using namespace std;
/***Hacer un programa en el que se ingrese un número entero positivo. Luego se solicitará lo siguiente:
 si el número es par, se solicitará que se ingrese un número menor. Si es impar se solicitará un número mayor.
 Verificar si el segundo ingreso es correcto o incorrecto indicando dicha situación con un mensaje por pantalla. Ejemplo:

Ingrese un número entero positivo: 6
Ingrese un número menor que 6: 2
Correcto!
*/



int main()
{
        unsigned int numero, numero2;

        cout<< "Ingrese un numero entero positivo: ";
        cin>> numero;



        if (numero % 2 == 0) {
            cout<< "Ingrese un numero menor que "<< numero << ": ";
            cin>> numero2;

        if (numero2 <numero )
                cout<< "!Correcto¡";

        else
            cout<< "Numero invalido";

        }
        else{
            cout<< "Ingrese un numero mayor a " << numero << ": ";
            cin>> numero2;
        if (numero2 >numero)
                cout<< "!Correcto¡";
        else
            cout<< "Numero invalido";



        }






    return 0;
}
