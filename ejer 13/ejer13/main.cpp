#include <iostream>

using namespace std;
/**Una empresa necesita calcular un bono que dará a sus empleados a fin de este año. Para ello se sigue el siguiente criterio:

Si el sueldo supera los $4000, el bono será del 15%. De lo contrario, el bono será del 20%.
Si el empleado tiene hijos se suma un plus del 5% del sueldo.
Si el empleado pertenece a la categoría 1, 2 ó 3, recibe un 10% del sueldo. Si pertenece a la categoría 4, 5 ó 6, recibe un 12% del sueldo. Si es de la categoría
7, 8 ó 9, recibe un 20% del sueldo pero no cobra el plus por tener hijos.

Realizar el programa que solicite la información necesaria para calcular el sueldo final. Finalmente el programa mostrará el total a pagarle al empleado
(sueldo + bono) Ejemplo:

Ingrese el sueldo: 2000
Ingrese categoría (1-9): 2
Tiene hijos (s/n)?: s
El sueldo total será de $2700.00
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
