//Considere siguiente proceso repetitivo para un n�mero entero dado: si el n�mero es 1, el proceso termina. De lo contrario,
//si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1. Si empezamos con 6, por ejemplo, obtendremos la sucesi�n de
//n�meros 6, 3, 10, 5, 16, 8, 4, 2, 1. La conjetura de Collatz dice que, a partir de cualquier n�mero inicial, la sucesi�n obtenida siempre
//termina en 1. Escriba un programa que permita verificar la conjetura de Collatz para cualquier entero dado, y que imprima la secuencia
//correspondiente
#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	int a,p,pa;
	cout<<"ingrese un numero ";
	cin>>a; 
	cout<<a<<" ";
	while(a>1){
		if(a%2==0){
			a=a/2;
			cout<<a<<" ";
		}
		else{
			a=a*3+1;
			cout<<a<<" ";
		}
	}
}
