#include <iostream>

using namespace std;
/***Hacer un programa en el que se ingrese un n�mero entero positivo. Luego se solicitar� lo siguiente:
 si el n�mero es par, se solicitar� que se ingrese un n�mero menor. Si es impar se solicitar� un n�mero mayor.
 Verificar si el segundo ingreso es correcto o incorrecto indicando dicha situaci�n con un mensaje por pantalla. Ejemplo:

Ingrese un n�mero entero positivo: 6
Ingrese un n�mero menor que 6: 2
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
                cout<< "!Correcto�";

        else
            cout<< "Numero invalido";

        }
        else{
            cout<< "Ingrese un numero mayor a " << numero << ": ";
            cin>> numero2;
        if (numero2 >numero)
                cout<< "!Correcto�";
        else
            cout<< "Numero invalido";



        }






    return 0;
}
