#include <iostream>

using namespace std;

/***Una empresa se dedica a vender ca�er�as de gas y dispone �nicamente de dos longitudes de ca�os que pueden empalmarse en l�nea recta pero no pueden cortarse.
Las longitudes disponibles son 1 metro y 5 metros. Esta empresa necesita un programa en el cual se ingrese la cantidad disponible de ca�os de 1 metro,
la cantidad disponible de ca�os de 5 metros y la longitud total del tendido (entero positivo expresado en metros) que un cliente desea cubrir.
El programa debe informar si es posible cubrir exactamente la necesidad del cliente (sin pasarse) y sugerir una posible combinaci�n de ca�os para alcanzar el total. Ejemplos:

Ejemplo 1:
Cantidad de ca�os de 1 metro: 12
Cantidad de ca�os de 5 metros: 3
Metros totales a cubrir: 21
Es posible cubrir el tendido.
Sugerencia:
3 unidades de ca�o de 5 metros
6 unidades de ca�o de 1 metro

Ejemplo 2:
Cantidad de ca�os de 1 metro: 2
Cantidad de ca�os de 5 metros: 10
Metros totales a cubrir: 29
No es posible cubrir el tendido.

**/


int main()
{
        unsigned int  cano1, cano5, metros_a_cubrir;
        int total1, total2;


        cout<< "Cantidad de ca�os de 1 metro: ";
        cin>> cano1;
        cout<< "Cantidad de ca�os de 5 metros: ";
        cin>> cano5;
        cout<< "metros totales a cubrir: ";
        cin>> metros_a_cubrir;

        total1= cano1+cano5 * 5;


        if (total1 < metros_a_cubrir){
            cout << "No es posible cubrir el tendido.";
            } else {
                cout << "Es posible cubrir el tendido." << endl;
                cout << "Sugerencia:" << endl;






    return 0;
}
