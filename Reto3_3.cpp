/*Reto 3. Crea una funcion en c++ que dado un arreglo de enteros, encuentre el subarreglo contiguo (que 
contenga al menos un número) que tenga la suma más grande y devuelva su suma.
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.*/
#include<iostream>
using namespace std;
int arreglo[9]= {-2,1,-3,4,-1,2,1,-5,4};
void funcion(int arreglo[9]);

void funcion(int arreglo[9])
{
    int suma=0;
    for(int n=0; n<9; n++)
    {
        for(int i=0; i<9; i++)
        {
            int sumP=0;
            for(int j=i; j<n; j++)
            {
                sumP+=arreglo[j];
            }
            if(sumP>suma)
            {
                suma=sumP;
            }
        }
    }
    cout<<suma;
}

int main()
{
    funcion(arreglo);
    return 0;
}