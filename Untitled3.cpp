#include"iostream"
using namespace std;
int main(){
	int k=0,x=0,y=0,r1=5,r2=7,producto=0,suma=0,s=0;
	suma=r1+r2;
	cout<<"La suma de las razones es "<<suma<<"\n";
	k=120/suma;
	cout<<"El valor de K es "<<k<<"\n";
	x=r1*k;
	cout<<"El valor de x es "<<x<<"\n";
	y=r2*k;
	cout<<"El valor de y es "<<y<<"\n";
	s=x+y;
	cout<<"La suma da "<<s<<"\n";
	producto=x*y;
	cout<<"El producto es "<<producto<<"\n";
}
