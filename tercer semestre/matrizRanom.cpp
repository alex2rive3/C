#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
    int matriz[20][20], largo=0, ancho=0;
    srand(time(NULL));
    //Pedir el tamaño de la matriz
    cout<<"Ingrese el Largo de la matriz: ";
    cin>>largo;
    cout<<"Ingrese el Ancho de la matriz: ";
    cin>>ancho;
    
    //ciclo para cargar la matriz con numeros aleatorios
    for(int x=0; x<ancho; x++){
        for(int i=0;i<largo; i++){
            matriz[x][i]=1+rand()%100-1;
        }
    }
    
    //ciclo para imprimir la matriz 
    for(int x=0; x<ancho; x++){
        for(int i=0;i<largo; i++){
            cout<<setw(5)<<matriz[x][i];
        }
        cout<<"\n";
    }
}
