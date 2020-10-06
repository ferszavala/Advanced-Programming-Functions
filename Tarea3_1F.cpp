/*1.-Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de 
referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La 
función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor
 en el número menor de billetes equivalentes.*/
#include "Tarea3_1Flib.h"
#include<iostream>

using namespace std;
void cambio(int dolares,int & cien,int & cincuenta,int & veinte,int & diez,int & cinco,int & uno)
{
int n;
cien=dolares/100;//al dividir entre 100 le quedan la cantidad (en numeros enteros) de billetes de 100 que debe de devolver
n=dolares%100;//al usar %100 calcula el residuo del dinero sobrante para seguir dividiendo
cincuenta=n/50;
n=n%50;
veinte=n/20;
n=n%20;
diez=n/10;
n=n%10;
cinco=n/5;
n=n%5;
uno=n;
}

int main()
{
int num, cien, cincuenta, veinte, diez, cinco, uno;
cout<<"Ingrese la cantidad en dolares: ";
cin>>num;

cambio(num,cien,cincuenta,veinte,diez,cinco,uno);

cout<<"Billetes de cien: "<<cien<<endl;
cout<<"Billetes de cincuenta: "<<cincuenta<<endl;
cout<<"Billetes de veinte: "<<veinte<<endl;
cout<<"Billetes de diez: "<< diez<<endl;
cout<<"Billetes de cinco: "<< cinco<<endl;
cout<<"Billetes de uno: "<<uno<<endl;
return 0;
}
