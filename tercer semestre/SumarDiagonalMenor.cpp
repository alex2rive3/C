#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
    int matriz[3][3], suma=0;
    srand(time(NULL));
    //ciclo para cargar la matriz con numeros aleatorios
    for(int x=0; x<3; x++){
        for(int i=0;i<3; i++){
            matriz[x][i]=1+rand()%100-1;
        }
    }
    
    //ciclo para imprimir la matriz 
    for(int x=0; x<3; x++){
        for(int i=0;i<3; i++){
            if(i<=x){
            	suma += matriz[x][i];
            	cout<<setw(5)<<matriz[x][i];
			}
        }
        cout<<"\n";
    }
    cout<<"La suma de todos los numeros por debajo de la diagonal principal es: "<<suma;
}
