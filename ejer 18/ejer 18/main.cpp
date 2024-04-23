#include <iostream>

using namespace std;

/***Una empresa se dedica a vender cañerías de gas y dispone únicamente de dos longitudes de caños que pueden empalmarse en línea recta pero no pueden cortarse.
Las longitudes disponibles son 1 metro y 5 metros. Esta empresa necesita un programa en el cual se ingrese la cantidad disponible de caños de 1 metro,
la cantidad disponible de caños de 5 metros y la longitud total del tendido (entero positivo expresado en metros) que un cliente desea cubrir.
El programa debe informar si es posible cubrir exactamente la necesidad del cliente (sin pasarse) y sugerir una posible combinación de caños para alcanzar el total. Ejemplos:

Ejemplo 1:
Cantidad de caños de 1 metro: 12
Cantidad de caños de 5 metros: 3
Metros totales a cubrir: 21
Es posible cubrir el tendido.
Sugerencia:
3 unidades de caño de 5 metros
6 unidades de caño de 1 metro

Ejemplo 2:
Cantidad de caños de 1 metro: 2
Cantidad de caños de 5 metros: 10
Metros totales a cubrir: 29
No es posible cubrir el tendido.

**/


int main()
{
        unsigned int  cano1, cano5, metros_a_cubrir;
        int total1, total2;


        cout<< "Cantidad de caños de 1 metro: ";
        cin>> cano1;
        cout<< "Cantidad de caños de 5 metros: ";
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
