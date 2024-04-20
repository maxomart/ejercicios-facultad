#include <iostream>

using namespace std;

/***Realizar un programa en el que se ingrese un símbolo. A continuación, el programa deberá indicar si se trata de una letra minúscula
(a-z sin “ñ” ni vocales acentuadas), una letra mayúscula (A-Z sin “Ñ”), un símbolo numérico (0-9) u otro signo (punto, coma, ñ, Ñ, vocales acentuadas, etc.).*/

int main()
{
    char simbolo;

    cout<< "Ingrese un simbolo: ";
    cin>> simbolo;

    if (simbolo >= 'a' && simbolo <= 'z'){
        cout<< "Ingreso una letra minuscula";
    }
     else if (simbolo >= 'A' && simbolo <='Z'){
        cout<< "Ingreso una letra mayuscula";
    }
    else if (simbolo >= '0' && simbolo <= '9'){
        cout<< "Ingreso un numero";
    }
     else {
        cout<< "Es otro signo";
     }


    return 0;
}
