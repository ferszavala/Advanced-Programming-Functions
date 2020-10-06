/*Reto 1. Crea una funcion en c++ que dada un arreglo de enteros y un numero objetivo, devuelva los 
índices de los dos números de modo que sumen un objetivo específico. Puede suponer que cada entrada 
tendría exactamente una solución y no puede usar el mismo elemento dos veces.*/
#include<iostream>
using namespace std;

int arreglo[4]={2,3,4,1}; //variables globales
int num=7;
void funcion(int arreglo[4],int &num); //prototipo
//Recordar que la diferencia del paso por referencia y el paso por valor es que el primerp modifica a una copia,
//mientras que el segundo modifica al valor original

void funcion(int arreglo[4],int &num) //el arreglo no lo recibe por referencia, la variable de numero sí
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arreglo[i]+arreglo[j]==num)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return;
            }
        }
    }
}

int main()
{
    funcion(arreglo, num);
    return 0;
}