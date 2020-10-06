/*Ejercicio 3. Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el 
número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. La 
función es calcular el año, mes y día actual para el número dado de días que se le transmitan. Usando las 
referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama. 
Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.
Ej. calc_años(365), resultado = 1/1/2001*/
#include "Tarea3_3Flib.h"
#include<iostream>

using namespace std;
void calc_anios(int & total, int & anio, int & mes, int & dia)
{
    anio=anio+(total/360); //se le suma anio porque va a calcular la cantidad de años a partir del 2001
    mes=mes+((total%360)/30); //se calcula %360 para ver cuantos dias sobran a partir de la division para sacar el numero de años, y se divide /30 para sacar el mes
    dia=dia+((total%365)%30);
}

int main()
{
    int total=0, anio=2000, mes=01, dia=01;
    cout<<"Ingrese la cantidad de dias desde 01/01/2001: ";
    cin>>total;
    calc_anios(total, anio, mes, dia);
    cout<<"La fecha que da después de "<<total<<" de días transcurridos es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    return 0;
}