#include <iostream>

using namespace std;

/***Realizar un programa en el que se ingrese un s�mbolo. A continuaci�n, el programa deber� indicar si se trata de una letra min�scula
(a-z sin �� ni vocales acentuadas), una letra may�scula (A-Z sin �є), un s�mbolo num�rico (0-9) u otro signo (punto, coma, �, �, vocales acentuadas, etc.).*/

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
