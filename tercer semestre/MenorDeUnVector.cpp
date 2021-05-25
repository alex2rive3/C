#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[10];
	int menor=100;
	srand(time(NULL));
	for(int x = 0; x < 10;x ++) {
		vector[x]= 1+rand()%(81-1);
		if(vector[x] < menor){
			menor = vector[x];
		}
	}
	for(int x = 0; x<10;x++) {
		cout<<setw(3)<<vector[x];	
	}
	cout<<"\nLa menor edad de la lista es: "<<menor;
}
