#include"iostream"
using namespace std;
int main(){
	int hombres=5, mujeres=7;
	float total=0,ciencias=8,letras=3, k=0,j=0, op=0,aux=0,a=1,b=1;
	k=(ciencias+letras)/hombres;// es la relacion entres hombres de ciencias y letras con el total de hombres 
	cout<<"El valor de k es "<<k<<"\n";
	j=mujeres*k;// j=mujeres, se multiplica mujeres por k
	cout<<"Valor de j=mujeres "<<j<<"\n";
	op=(5*k)+j;// operacion esel denominador de la fraccion 
	cout<<op<<"\n";
	total=ciencias/op;// es la relacion entre hombres de ciencias y el total de alumnos 
	cout<<"La relacion es "<<total;
	while(!(aux==total)){
		aux=ciencias/op;
		if(aux<total){
			a++;
		}
		else 
		if(aux>total){
		a--;
		b++;
		}
	}
return 0;
}
