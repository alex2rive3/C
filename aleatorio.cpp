#include<stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
int main(){
	int a,b,c;
	srand(time(NULL));
	a=65+rand()%(91-65);
	b=65+rand()%(91-65);
	c=65+rand()%(91-65);
	cout<<"1"<<a<<"\n";
	cout<<"2"<<b<<"\n";
	cout<<"3"<<c;
}
