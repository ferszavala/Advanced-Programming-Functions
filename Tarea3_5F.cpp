/*Ejercicio 5. Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier 
par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a 
mayor(), será devuelta la segunda fecha.*/
#include "Tarea3_5Flib.h"
#include<iostream>

using namespace std;
void mayor(int & anio, int & anio2, int & mes, int & mes2, int & dia, int & dia2)
{
        if(anio>anio2)
        {
            anio2=anio;
        }
        else if(anio2>anio)
        {
            anio=anio2;
        }
        else
        {
            if(mes>mes2)
            {
                mes2=mes;
            }
            else if(mes2>mes)
            {
                mes=mes2;
            }
            else
            {
                if(dia>dia2)
                {
                    dia2=dia;
                }
                else if(dia2>dia)
                {
                    dia=dia2;
                }
            }
        }
}
int main()
{
    int anio, anio2, mes, mes2, dia, dia2;
    cout<<"Ingrese día, mes y año de la primer fecha (en ese orden): ";
    cin>>dia; 
    cin>>mes; 
    cin>>anio;
    cout<<"Ingrese día, mes y año de la segunda fecha (en ese orden): ";
    cin>>dia2; 
    cin>>mes2; 
    cin>>anio2;
    if(anio>2020 || anio2>2020 || mes>12 || mes2>12 || mes<0 ||mes2<0 || dia>30 || dia2>30 || dia<0 || dia2<0)
    {
        cout<<"La fecha no es válida";
    }
    else if(dia==dia2 && mes==mes2 && anio==anio2)
    {
        dia2=dia;
        mes2=mes;
        anio2=anio;
        cout<<"Las dos fechas son iguales"<<endl;
    }   
    else
    {
         mayor(anio, anio2, mes, mes2, dia, dia2);
        cout<<"La fecha más cercana (mayor) es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    }
    return 0;
}