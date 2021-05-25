#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
    int lista[100];
    int tamano=0;
    srand(time(NULL));
    cout<<"Ingrese el tama�o del vector: ";
    cin>>tamano;
    for(int x=0; x<tamano; x++){
        lista[x]=1+rand()%100-1;
        cout<<setw(3)<<lista[x];
	}
}  
