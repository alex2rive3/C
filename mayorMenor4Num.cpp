#include"iostream"
using namespace std;
int main()
{
	int a,b,c,d,mayor,menor,producto,cuadrado;
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
	producto=(mayor*menor);
	printf("El menor es %d\n",menor);
	printf("El producto es %d\n",producto);
}
