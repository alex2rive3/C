#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[7];
	float promedio=0;
	srand(time(NULL));
	for(int x= 0; x<7;x++) {
		vector[x]= 1+rand()%35-1;
		promedio += vector[x];
		cout<<setw(3)<<vector[x];
	}
	promedio = promedio/7;
	cout<<"\nLa temperatura promedio que se encontro fue de: "<<promedio<<"\n";
	cout<<"Las temperatuas mayores o iguales al promedio registrados fueron las siguientes: \n";
	for(int x= 0; x<7;x++) {
		if(vector[x]>=promedio){
			cout<<setw(3)<<vector[x];
		}
	}
}

