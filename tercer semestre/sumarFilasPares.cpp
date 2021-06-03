#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	//matriz[filas][columnas]
    int matriz[5][4], suma=0, contador = 0;
    srand(time(NULL));
    //ciclo para cargar la matriz con numeros aleatorios
    for(int x=0; x<5; x++){
        for(int i=0;i<4; i++){
            matriz[x][i]=1+rand()%100-1;
        }
    }
    
    //ciclo para imprimir la matriz 
    for(int x=0; x<5; x++){
        for(int i=0;i<4; i++){
            cout<<setw(5)<<matriz[x][i];
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Todas las filas pares que seran sumadas"<<"\n";
    for(int x=0; x<5; x++){
        for(int i=0;i<4; i++){
        	if(x%2==0){
        		cout<<setw(5)<<matriz[x][i];
        		suma += matriz[x][i];
        		contador +=1;
			}
        }
        cout<<"\n";
    }
    //cout<<contador;
    cout<<"La suma de los numeros de las filas par es: "<<suma;
    cout<<"\nEl promedio de dicha suma es igual a: "<<suma/contador;
}
