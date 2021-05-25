#include"iostream"
using namespace std;
int main()
{
	int a,b,c,d,mayor,menor;
	cout<<"escriba el primer numero: ";
	cin>>a;
	cout<<"escriba el segundo numero: ";
	cin>>b;
	cout<<"escriba el tercer numero: ";
	cin>>c;
	menor=a;
	mayor=a;
	if (a==b && a!=c)
	{
		printf("El primer y segundo numero son iguales \n");
		printf("El tercer numero es distinto \n");
	}
	if (a==c && a!=b)
	{
		printf("El primer y tercer numero son iguales\n");
		printf("el segundo numero es distinto\n");
	}
	if (b==c && b!=a)
	{
		printf("El segundo y tercer numero son iguales\n");
		printf("El primero es distinto\n");
	}
	if (a==b && a==c)
	{
		printf("Los tres numeros son iguales \n");
	}
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
	printf("El mayor es %d\n",mayor);
	printf("El menor es%d\n",menor);
	return 0;
}
