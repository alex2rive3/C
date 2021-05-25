#include"iostream"
using namespace std;
int main()
{
	int acumulador=0;
	for(int i=20;i<=218;i+=6){
		acumulador=acumulador+i;
		cout<<i<<"\n";
	}
	cout<<"La suma es "<<acumulador;
}
