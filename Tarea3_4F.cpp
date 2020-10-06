/*Ejercicio 4. Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o 
igual que cero: x^y*/
#include "Tarea3_4Flib.h"
#include<iostream>

using namespace std;
double potencia(int x, int y)
{
 if (y==0)
     return 1;
 else
     return x*(potencia(x,y-1));//se va llamando recursivamente hasta que llega a 0 para multiplicar x, y numero de veces
}

int main()
{
    int x,y;
    cout<<"Introduzca la base (x): ";
    cin>>x;
    do
    {
        cout<<"Introduzca el exponente al que desea elevar la base(que sea >=0): ";
        cin>>y;
    }while(y<0);

    cout<<"El resultado de "<<x<<" elevado a "<<y<<" es igual a: "<<potencia(x,y)<<endl;
    return 0;
}