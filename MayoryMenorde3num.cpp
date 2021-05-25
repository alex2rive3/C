#include"iostream"
using namespace std;
int main()
{
	int a,b,c,d,mayor,menor,suma,promedio;
	cout<<"escriba el primer numero: ";
	cin>>a;
	cout<<"escriba el segundo numero: ";
	cin>>b;
	cout<<"escriba el tercer numero: ";
	cin>>c;
	cout<<"escriba el cuarto numero: ";
	cin>>d;
	suma=a+b+c+d;
	promedio=(a+b+c+d)/4;
	menor=a;
	mayor=a;
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
	printf("El mayor es %d\n",mayor);
	printf("El menor es%d\n",menor);
	printf("La suma es %d\n",suma);
	printf("El promedio es %d\n",promedio);
	return 0;
}
