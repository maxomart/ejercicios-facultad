#include <iostream>

using namespace std;
/***Realizar un programa en el que se ingresen por teclado 3 letras que pueden ser mayúsculas o minúsculas
(no necesariamente todas del mismo tipo). A continuación el programa deberá indicar cuál se encuentra primero en el alfabeto.*/


int main()
{
  char letra1, letra2, letra3, resultado;

  cout<< "Ingrese 1 letra (mayusculas o minusculas): ";
  cin>> letra1;
  cout<< "Ingrese 1 letra (mayusculas o minusculas): ";
  cin>> letra2;
  cout<< "Ingrese 1 letra (mayusculas o minusculas): ";
  cin>> letra3;

  if (letra1 <= letra2 && letra1 <= letra3){
        cout<< letra1 << " Va primero en el alfabeto";
  }
  else if (letra2 <= letra1 && letra2 <= letra3){
        cout<< letra2 << " Va primero en el alfabeto";
  }
  else {
    cout<< letra3 << " Va primero en el alfabeto";
  }



    return 0;
}
