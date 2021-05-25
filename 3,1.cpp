#include"iostream"
using namespace std;
int main()
{
	int a,b,c,d,mayor,menor,mitad;
	cout<<"escriba el primer numero: ";
	cin>>a;
	cout<<"escriba el segundo numero: ";
	cin>>b;
	cout<<"escriba el tercer numero: ";
	cin>>c;
	cout<<"escriba el cuarto numero: ";
	cin>>d;
	menor=a;
	mayor=a;
	mitad=0;
	if (b>mayor)
	{
		mayor=b;
	}
	else{
		menor=b;
	}
	if (c>mayor)
	{
		mayor=c;
	}
	else
	{
		menor=c;
	}
	if (d>mayor)
	{
		mayor=d;
	}
	else
	{
		menor=d;
	}
	if (mayor%2==0)	
	{
		printf("El cuadrado del mayor es %d\n",mayor*mayor);
	}
	else{
		printf("El triple del mayor es %d\n",mayor*3);
	}
	if (menor%2==0)	
	{
		printf("El cuadrado del menor es %d\n",menor*menor);
	}
	printf("El producto del menor y la mitad del mayor es %d\n",(mayor/2)*menor);
}
