#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[20], masAlto=0, masBajo=0;
	float promedio=0;
	srand(time(NULL));
	for(int x= 0; x<20;x++) {
		vector[x]= 150 + rand() % (201 - 150);
		promedio += vector[x];
		cout<<setw(4)<<vector[x];
	}
	promedio = promedio/20;
	cout<<"\nLa altura promedio es de: "<<promedio<<"\n";
	for(int x= 0; x<20;x++) {
		if(vector[x]>=promedio){
			masAlto += 1;
		}
		else{
			masBajo +=1;
		}
	}
	cout<<"En la clase "<<masAlto<<" son mas alto que el promedio y "<<masBajo<<" son mas bajo que el promedio";
}

