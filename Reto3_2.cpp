/*Reto 2. Crea una funcion en c++ que  dado un arreglo ordenado de menor a mayor y un valor objetivo, 
devuelve el índice si se encuentra del valor objetivo. Si no es así, devuelva el índice donde estaría si 
estuviera insertado en orden. Puede asumir que no hay duplicados en la matriz.
Input: [1,3,5,6], 5
Output: 2*/
#include<iostream>
using namespace std;
int arreglo[4]={1,3,4,5};
int num=0, c=0;
void funcion(int arreglo[4],int &num); //prototipo
void funcion(int arreglo[4],int &num)
{
    for(int i=0;i<4;i++)
    {
            if(arreglo[i]==num)
            {
                cout<<i<<endl;//imprime la posición en la que se encontraba el num
               
            }
            if((arreglo[i]<num) && (arreglo[i+1]>num))//debido a que esta entre dos posiciones
            {
            cout<<"Deberia ir en la posición "<<i+1<<endl; //imprime la posicion en la que deberia de estar
            }
    }
}
int main()
{
    cout<<"Ingrese el numero que desea buscar en el arreglo: ";
    cin>>num;
    funcion(arreglo,num);
    return 0;
}