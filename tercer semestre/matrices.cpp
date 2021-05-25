#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
    int matriz[10][10],random=0,suma=0,promedio=0,max=0,min=1000,buscador=0,contador=0,sorteo=0;
    srand(time(NULL));
    //ciclo para cargar la matriz con numeros aleatorios
    for(int x=0; x<10; x++){
        for(int i=0;i<10; i++){
            random=1+rand()%1000-1;
            suma=random+suma;
            matriz[x][i]=random;
        }
    }
    //ciclo para buscar el valor maximo dentro de la matriz
    for(int x=0; x<10; x++){
        for(int i=0;i<10; i++){
            if(matriz[x][i]>max){
                max=matriz[x][i];
            }
            else if(matriz[x][i]<min){
                min=matriz[x][i];
            }
        }
    }
    
    //ciclo para buscar el valor minimo dentro de la matriz
    for(int x=0; x<10; x++){
        for(int i=0;i<10; i++){
            if(matriz[x][i]>max){
                max=matriz[x][i];
            }
        }
    }
    
    
    //ciclo para imprimir la matriz 
    for(int x=0; x<10; x++){
        for(int i=0;i<10; i++){
            cout<<setw(5)<<matriz[x][i];
        }
        cout<<"\n";
    }
    
    //Ciclo para encontrar un elemento de la matriz por medio de un sorteo 
    while(sorteo==false){
        buscador=1+rand()%1000-1;
        contador++;
        
        for(int x=0; x<10; x++){
            for(int i=0;i<10; i++){
                if(buscador==matriz[x][i]){
                    cout<<"La primera ocurrencia es "<<buscador<<" fue encontrado en el intento nº "<<contador<<"\n";
                    cout<<"Las coordenadas son "<<"Fila "<<x<<" Columna "<<i<<"\n";
                    sorteo=true;
                }
            }
        }
    }
    
    promedio=suma/100;
    cout<<"La suma de todos los numeros de la matriz es: "<<suma<<"\n";
    cout<<"El promedio de todos los numeros de la matriz es: "<<promedio<<"\n";
    cout<<"El valor maximo de la matriz es: "<<max<<"\n";
    cout<<"El valor minimo de la matriz es: "<<min;
}
