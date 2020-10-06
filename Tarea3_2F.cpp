/*Ejercicio 2. Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado 
totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir el 
número de segundos transmitido en un número equivalente de horas, minutos y segundos.*/
#include "Tarea3_2Flib.h"
#include<iostream>

using namespace std;
void tiempo(int segundos, int & horas, int & min, int & seg)
{
    horas=segundos/3600;
    min=(segundos%3600)/60;
    seg=(segundos%3600)%60;
}
int main()
{
    int segundos, horas, min, seg;
    cout<<"Ingrese la cantidad en segundos: ";
    cin>>segundos;
    tiempo(segundos, horas, min, seg);
    cout<<"La cantidad en horas es: "<<horas<<endl;
    cout<<"La cantidad en minutos es: "<<min<<endl;
    cout<<"La cantidad en segundos es: "<<seg<<endl;
    return 0;
}