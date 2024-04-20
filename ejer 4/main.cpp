#include <iostream>

using namespace std;

/**
Escribir un programa en el que se ingresen 2 números y un carácter de operación matemática
(suma, resta, multiplicación y división) e informe el resultado de la operación.
 Es importante tener en cuenta que el programa no debe caer en errores de ejecución. Ejemplo:

Ingrese el primer número: 8
Ingrese el segundo número: 2
Ingrese la operación (+, -, *, /): +
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
