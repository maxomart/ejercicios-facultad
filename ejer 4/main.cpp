#include <iostream>

using namespace std;

/**
Escribir un programa en el que se ingresen 2 n�meros y un car�cter de operaci�n matem�tica
(suma, resta, multiplicaci�n y divisi�n) e informe el resultado de la operaci�n.
 Es importante tener en cuenta que el programa no debe caer en errores de ejecuci�n. Ejemplo:

Ingrese el primer n�mero: 8
Ingrese el segundo n�mero: 2
Ingrese la operaci�n (+, -, *, /): +
8 + 2 = 10

*/


int main()
{
        int option;
        int a,b;

        cout<< "la opcion 1 suma" << endl;
        cout<< "la opcion 2 resta" << endl;
        cout<< "la opcion 3 multiplica" << endl;

        cout << " Ingrese una opcion: ";
            cin>> option;




        switch(option){

                case 1:
                    cout<< "ingrese un numero: " ;
                        cin>>a;
                    cout<< "ingrese un numero: " ;
                        cin>>b;

                    cout<< a+b;
                    break;

                case 2:
                    cout<< "ingrese un numero: " ;
                        cin>>a;
                    cout<< "ingrese un numero: " ;
                        cin>>b;
                    cout<< a-b;
                    break;
;
                case 3:
                    cout<< "ingrese un numero: " ;
                        cin>>a;
                    cout<< "ingrese un numero: " ;
                        cin>>b;
                    cout<< a*b;
                    break;


        }

    return 0;
}
