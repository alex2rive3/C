#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[20];
	int mayor=0, posicion=0;
	srand(time(NULL));
	for(int x = 0; x < 20;x ++) {
		vector[x]= 1+rand()%(51-1);
	}
	cout<<"\nLista de todos los valores menores o iguales a 25 contenidas en el vector\n";
	for(int x = 0; x<20;x++) {
		if(vector[x] <= 25){
			cout<<setw(3)<<vector[x];	
		}
	}
}
