#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[7];
	int mayor=0, posicion=0;
	srand(time(NULL));
	for(int x = 0; x < 7;x ++) {
		vector[x]= 1+rand()%(11-1);
		if(vector[x] > mayor){
			mayor = vector[x];
			posicion = x;
		}
	}
	for(int x = 0; x<7;x++) {
		cout<<setw(3)<<vector[x];
	}
	cout<<"\nEl numero mayor del vector es "<<mayor<<" y se encuentra en la posicion "<<posicion;
}
