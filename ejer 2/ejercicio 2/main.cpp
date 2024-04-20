#include <iostream>

using namespace std;

/**Elaborar un programa que solicite al usuario que ingrese un número real y
luego muestre el Redondeo al entero más próximo de dicho número, el Piso y el Techo*. Ejemplo:

Ingrese un número real: -5.32
Redondeo = -5
Piso = -6
Techo = -5
*/

int main()
{
    double real;
    int redondeo, piso, techo;

    cout << "Ingrese un numero real: ";
    cin >> real;


    redondeo =real + 0.5;
    piso = real;
    techo = real + 1;
    if(redondeo==piso)
    {
        techo= techo - 1;
    }
    if (real==techo){
        piso= piso +1;
    }

     else if (real<0)
    {
        redondeo= real - 0.5;
        techo = techo - 1;
        piso= piso - 1;
    }







    cout << "Redondeo = " << redondeo << endl;
    cout << "Piso = " << piso << endl;
    cout << "Techo = " << techo << endl;

    return 0;
}
