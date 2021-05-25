#include<iostream>
#include<stdlib.h>
using namespace std;

class Agenda{   //se crea la clase
	private:  //se declaran los atrivutos de la clase 
		string nombre;
		string apellido;
		int telefono;
		int anoNacimento;
	public: //se crean los metodos o las acciones de la clase
		Agenda(string, string, int, int); //Constructor de la clase 
		void imprimir();
		int edad();
};
//se Hace un constructor para inicializar todas las variables 
Agenda::Agenda(string _nombre, string _apellido, int _telefono, int _anoNacimiento){
	nombre = _nombre;
	apellido = _apellido;
	telefono = _telefono;
	anoNacimento = _anoNacimiento;
}

int Agenda::edad(){
	int _edad;
	_edad = (2020 - anoNacimento);
	return _edad;
	
}

void Agenda::imprimir(){
	cout<<"Nombre: "<<nombre<<"\n";
	cout<<"Apellido: "<<apellido<<"\n";
	cout<<"Edad: "<<edad()<<"\n";
	cout<<"Numero de Teleono: "<<telefono<<"\n";
}

int main(){
	string nombre, apellido;
	int telefono, anoNacimiento;
	cout<<"Ingrese su nombre\n";
	cin>>nombre;
	cout<<"Ingrese su apellido\n";
	cin>>apellido;
	cout<<"Ingrese su numero de telefono\n";
	cin>>telefono;
	cout<<"Ingrese su año de nacimiento\n";
	cin>>anoNacimiento;
	
	Agenda agenda(nombre,apellido,telefono,anoNacimiento);
	
	agenda.edad();
	agenda.imprimir();
	}
