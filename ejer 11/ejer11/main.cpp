#include <iostream>

using namespace std;

/****Realizar un programa que solicite una fecha. El usuario ingresará el día, el mes y el año por separado. Luego el programa mostrará
 una leyenda que indique si la fecha ingresada es válida. Ejemplo:

Ingrese el día: 29
Ingrese el mes: 2
Ingrese el año: 2000
La fecha es correcta.

Casos de prueba
29/2/2000 es correcta
28/2/2000 es correcta
29/2/1996 es correcta
29/2/2012 es correcta
5/12/1903 es correcta
31/4/2008 es incorrecta
32/7/2005 es incorrecta
8/13/2007 es incorrecta
29/2/1900 es incorrecta
30/2/2000 es incorrecta
0/10/2009 es incorrecta
0/2/2000  es incorrecta
30/0/2004 es incorrecta
30/2/2004 es incorrecta


Ayuda:
Para saber si un año es bisiesto: Si el año es divisible por 4, es bisiesto siempre y cuando no sea divisible por 100.
Cuando el año es divisible por 100 también debe ser divisible por 400. Por ejemplo: el año 2000 es bisiesto pero el 1800 no lo es.
*/



int main()
{

    unsigned int dia, mes, anio, bisiesto;


    cout<< "Ingrese un dia: ";
    cin>> dia;
    cout<< "Ingrese un mes: ";
    cin>> mes;
    cout<< "Ingrese un anio: ";
    cin>> anio;


    bisiesto = anio/4;


    if (dia >0 &&dia <=31 && mes<=12 && anio<=2024)
    {
                if ((anio%4 == 0 && anio%100 != 0) || (anio%400 == 0)){
            if (mes==2){
                    if(dia<=29){
                        cout<< dia << "/"<< mes << "/"<< anio << " es correcto"<< endl;
                            } else{
                                cout<< dia << "/"<< mes << "/"<< anio << " es incorrecto"<< endl;
                            }
                    }else {
                if (dia <= 28) {
                    cout << dia << "/" << mes << "/" << anio << " es correcto" << endl;
                } else {
                    cout << "Fecha incorrecta" << endl;
                }
            }
        }

        else{
            cout<< dia << "/"<< mes << "/"<< anio << " es correcto"<< endl;
        }


    }
    else{
        cout<< "Fecha incorrecta";
    }



    return 0;
}
