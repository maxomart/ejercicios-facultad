#include <iostream>

using namespace std;
/***Realizar un programa en el que se ingresen dos números enteros positivos.
Luego deberá restar el mayor del menor e indicar si dicha diferencia es un valor que está entre ambos números
(es decir, es mayor que el más chico y menor que el más grande de los ingresados). Por ejemplo, si se ingresan 19 y 8,
 su diferencia es 11 y este valor está entre 8 y 19.*/


int main()
{
   unsigned int numero1, numero2, resultado;

   cout<< "Ingrese un numero: ";
   cin>> numero1;
   cout<< "Ingrese otro numero: ";
   cin>> numero2;

   resultado = numero1 - numero2;

   if (resultado <= numero1 && resultado >= numero2){
        cout<< "Su direrencia es " << resultado << " y este valor esta entre " << numero1 << " y " << numero2<<endl;
   }

   else{
        cout<< "El resultado no esta entre ambos numero que eligio";
   }


    return 0;
}
