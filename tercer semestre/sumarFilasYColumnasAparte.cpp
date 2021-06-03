#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	//matriz[filas][columnas]
    int matriz[3][3], sumaFila=0, sumaColumna = 0;
    int vectorFila[3], vectorColumna[3];
    srand(time(NULL));
    //ciclo para cargar la matriz con numeros aleatorios
    for(int x=0; x<3; x++){
        for(int i=0;i<3; i++){
            matriz[x][i]=1+rand()%10-1;
        }
    }
    
    //ciclo para imprimir la matriz 
    for(int x=0; x<3; x++){
        for(int i=0;i<3; i++){
        	sumaFila += matriz[x][i]; // asi se recorre normalmente una matris por filas
        	sumaColumna += matriz[i][x]; // en este caso invertimos para que rrecorra por columnas y así sumarlas
            cout<<setw(5)<<matriz[x][i];
        }
        vectorColumna[x]= sumaColumna;
        vectorFila[x] = sumaFila;
        cout<<"\n";
        sumaFila = 0;
        sumaColumna =0;
    }
    cout<<"La suma de todas las filas\n";
    
	for(int x= 0; x<3;x++) {
		cout<<setw(5)<<vectorFila[x]<<"\n";
	}
	cout<<"\nLa suma de todas las columnas es: \n";
	for(int x= 0; x<3;x++) {
		cout<<setw(5)<<vectorColumna[x];
	}
    //cout<<"\n";
    //cout<<"Todas las filas pares que seran sumadas"<<"\n";
    //cout<<contador;
    //cout<<"La suma de los numeros de las filas par es: "<<suma;
    //cout<<"\nEl promedio de dicha suma es igual a: "<<suma/contador;
}
