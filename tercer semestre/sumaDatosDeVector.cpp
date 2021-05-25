#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[4];
	int suma=0;
	srand(time(NULL));
	for(int x = 0; x < 4;x ++) {
		vector[x]= 1+rand()%10-1;
		suma += vector[x];
	}
	for(int x = 0; x<4;x++) {
		cout<<setw(3)<<vector[x];
	}
	cout<<"\nLa suma de todos los datos del vector es: "<<suma;
}
