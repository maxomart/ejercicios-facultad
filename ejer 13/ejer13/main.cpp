#include <iostream>

using namespace std;
/**Una empresa necesita calcular un bono que dar� a sus empleados a fin de este a�o. Para ello se sigue el siguiente criterio:

Si el sueldo supera los $4000, el bono ser� del 15%. De lo contrario, el bono ser� del 20%.
Si el empleado tiene hijos se suma un plus del 5% del sueldo.
Si el empleado pertenece a la categor�a 1, 2 � 3, recibe un 10% del sueldo. Si pertenece a la categor�a 4, 5 � 6, recibe un 12% del sueldo. Si es de la categor�a
7, 8 � 9, recibe un 20% del sueldo pero no cobra el plus por tener hijos.

Realizar el programa que solicite la informaci�n necesaria para calcular el sueldo final. Finalmente el programa mostrar� el total a pagarle al empleado
(sueldo + bono) Ejemplo:

Ingrese el sueldo: 2000
Ingrese categor�a (1-9): 2
Tiene hijos (s/n)?: s
El sueldo total ser� de $2700.00
*/



int main()
{
    unsigned int sueldo, bonos, categoria;
    char hijos;
    int  total_total;

    cout<< "Ingrese el sueldo: ";
    cin>> sueldo;
    cout<< "Ingrese su categoria(1-9): ";
    cin>> categoria;
    cout<< "Tiene hijos (s/n): ";
    cin>> hijos;


    if (sueldo > 4000){
        bonos= sueldo*0.15;
    }
        else{
            bonos=sueldo*0.20;
        }

    if (categoria >1 && categoria< 3){
            bonos+= sueldo*0.10;
    }
        else if (categoria> 4 && categoria< 6){
            bonos+= sueldo*0.12;
        }
            else{
                bonos+=sueldo*0.20;
            }

    if (hijos = 's' && categoria<7){
        bonos+= sueldo*0.05;
    }


        total_total= sueldo+bonos;

        cout<< "Su sueldo total sera de $" << total_total;


    return 0;
}
