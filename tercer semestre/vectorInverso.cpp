#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main(){
	int vector[6];
	srand(time(NULL));
	for(int x= 0; x<=5;x++) {
		vector[x]= 1+rand()%10-1;
		cout<<setw(3)<<vector[x];
	}
	cout<<"\nInvertido\n";
	for(int x = 5; x>=0;x--) {
		cout<<setw(3)<<vector[x];
	}
}
