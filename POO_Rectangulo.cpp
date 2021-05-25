#include<iostream>
#include<stdlib.h>
using namespace std;

class rectangulo{   //se crea la clase
	private:  //se declaran los atrivutos de la clase 
		float largo;
		float ancho;
	public: //se crean los metodos o las acciones de la clase
		rectangulo(float, float); //Constructor de la clase 
		void perimetro();
		void area();
};
//se Hace un constructor para inicializar todas las variables 
rectangulo::rectangulo(float _largo, float _ancho){
	largo = _largo;
	ancho = _ancho;
}

void rectangulo::perimetro(){
	float _perimetro;
	_perimetro = (2*ancho)+(2*largo);
	cout<<"\nEl perimetro del Rectangulo es: "<<_perimetro;
}
void rectangulo::area(){
	float _area;
	_area = (largo*ancho);
	cout<<"\nEl area del rectangulo es: "<<_area;
}
int main(){
	//Se pide al usuario los valores que seraqn utilizados pata el calculo 
	float a, l;
	cout<<"Para calcular el perimetro y area del rectangulo.."
	cout<<"Ingrese el alcho del rectangulo \n";
	cin>>a;
	cout<<"Ingrese el largo del rectangulo \n";
	cin>>l;
	//se inicializa el objeto rectangulo como r1
	rectangulo r1(l,a);
	//Switch para que el usuario elija que ino quiere ver
	cout<<"Que decea ver \n";
	cout<<"1- Perimetro \t  2- Area \t 3- Perimetro y Area \t \n";
	int op = 0;
	cin>>op;
	
	switch(op){
		case 1:
			r1.perimetro();
			break;
		case 2:
			r1.area();
			break; 
		case 3: 
			r1.perimetro();
			r1.area();
			break;
	}
	return 0;
}
