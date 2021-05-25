#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[8];
	float suma=0;
	int aplazos=0, aprobadas=0;
	srand(time(NULL));
	for(int x = 0; x < 8;x ++) {
		vector[x]= 1+rand()%(6-1);
		suma += vector[x];
	}
	for(int x = 0; x<8;x++) {
		if(vector[x]>1){
			aprobadas += 1;
		}else{
			aplazos += 1;
		}
	}
	
	for(int x = 0; x<8;x++) {
		cout<<setw(3)<<vector[x];
	}
	cout<<"\nEl promedio de las notas del alumno es: "<<suma/8;
	cout<<"\nEl alumno a aporbado "<<aprobadas<<" materias y reprobo "<<aplazos;
}
