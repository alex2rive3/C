#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

//Estructura para la pila 
struct pilas
{
string d,m; //dato a ser almacenado 
pilas *a;// puntero que apunta al elemento de la pila
}*c,*e; //Variables de tipo puntero 

//TODOS LOS PROCEDIMIENTOS DE PILA 
void menuPila(void);
void ingresarPila(void);
void sacarPila(void);
void editarPila(void);
void actualizar_pila(void);

//Desarrollo de todos los procedimientos de la pila 
void menuPila(void)
{
int y,opc;
 for(;;)
 {
 cout<<"\n1. Ingresar datos";
 cout<<"\t2. Sacar datos";
 cout<<"\t3. Editar datos";
 cout<<"\t0. Terminar";
 cout<<"\n Ingrese opcion: ";cin>>opc;
 switch(opc)
 {
 case 1: ingresarPila();
 break;
 case 2: sacarPila();
 break;
 case 3: editarPila();
 break;
 case 0: exit(1);
 default: cout<<"\n Opcion no valida!!"; break;
 }
actualizar_pila();
cout<<"\n\nOprima una tecla para continuar";
}
}
 
void ingresarPila(void)
{
 if(!c)
 {
//Si es el primer elemento ingresado ejecuta este codigo
 c=new(pilas);
 cout<<"Ingrese elemento: ";
 cin>>c->d;
 c->a=NULL;
 return;
 }
 //Si ya existe elementos de la lista ejecuta esta parte del codigo
 e=new(pilas);
 cout<<"\nIngrese elemento: ";
 cin>>e->d;
 e->a=c;
 c=e;
}
 
void sacarPila(void)
{
 if(!c)
 {
 cout<<"\n\nNo hay elementos!!";
 return;
 }
 
 //Se instancia la estructura en el puntero e
 e=new(pilas);
 // toda la estructura se le asigna a la variable e
 e=c;
 cout<<"\n\nElemento eliminado: " <<e->d<<"\n";
 //se le asigna al puntero c el puntero de la sima
 c=e->a;
 delete(e);
 
}
void editarPila(void){
 if(!c)
 {
 cout<<"\nNo hay elementos!!";
 return;
 }
 
 //Se instancia la estructura en el puntero e
 e=new(pilas);
 // toda la estructura se le asigna a la variable e
 e=c;
 cout<<"\n\nElemento ha ser editado: \n" <<e->d;
 cout<<"\nIngrese un nuevo elemento: \n";
 //SE GUARDA EL NURVO DATO INGRESADO EN LA PILA
 cin>>e->d;
 //se le asigna al puntero c el puntero de la sima
 c=e->a;
 //SE ASIGNA EL CONTENIDO DE LA ESTRUCTURA "E" EN LA POCISION "A" A LA ESTRUCTURA C
 e->a=c;
 c=e;
}
void actualizar_pila(void)
{
 int y=2,i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }
 
for(i=0;i<=ca;i++)
 {
 cout<<" ";
 }
 //muestro lo que tiene la pila!!
 i=0;
 e=c;
 while(e)
 {
 cout<<"\n";
 cout<<++i<<" - "<<e->d;
 e=e->a;
 }
}		



//Estrucutra para la cola 
struct cola{ // estructura 
 string dato;     // variable paraguardae el elemnto
 cola *s;     // puntero siguiente
 }*p,*aux,*u;  // p= puntero a primero, puntero aux auxiliar, puntero u ultimo 
 
 //DECLARACION DE TODOS LOS PROCEDIMIENTOS DE LA COLA 
void insertarCola(string dat);
void menuCola();
void borrarCola();
void listarCola();
void buscarCola();
void editarCola();
 
 //DESARROLLO DE LOS PROCEDIMIENTOS 
 string y; //variable para agregar los elementos a la cola 
 
 void menuCola(){
int opc;  //variable para la opcion del switch
do
{
cout<<"\n1. Insertar";
cout<<"\t2. Borrar";
cout<<"\t3. Buscar";
cout<<"\t4. Editar";
cout<<"\t5. Ver";
cout<<"\t0. Salir";
cout<<"\n Ingrese opcion: ";cin>>opc;
switch(opc)
{
case 1: cout<<"Ingrese dato: ";
	cin>>y;
	insertarCola(y);
	cout<<"\nDato insertado!!";
	break;
case 2: borrarCola();
	break;
case 3: buscarCola(); 
	break;
case 4: editarCola();
	break; 
case 5: listarCola();
	break; 
case 0: exit(1);
default: cout<<"\n Opcion no valida!!"; break;
}
}
while(opc);
}
 
void insertarCola(string dat){
	aux=new(cola); //se inicializa la cola para poder utilizarla 
	aux->dato=dat;//se le agrega el valor de la variable en la variable dato de la cola aux
	if(u){ //si la cola no esta vacia realiza lo que esta dentro del if
		u->s=aux; 
		aux->s=NULL; //aux se vuelve el ultimo 
		u=aux; //
	}else{
		p=u=aux; //si la lista esta vacia el primero es el ultimo 
	}
}
void borrarCola(){
	if(p){
		aux=p;
		cout<<"\nElimino a " <<p->dato;	
		p=aux->s;
		delete(aux);
	}else{
		cout<<"\n No hay datos";
	}
}
 
void listarCola(){
	int i=0;
	if(!u){
		cout<<"\n No hay datos en la cola";
		return;
	}
	aux=p;
	while(aux){
		cout<<"\n"<<++i<<" - "<<aux->dato;
		aux=aux->s;
	}
}
 void buscarCola(){
 	string in;
 	int i=0, band=0;
	if(!u){
		cout<<"\n No hay datos en la cola";
		return;
	}
	aux=p;
	cout<<"\nIngrese el numero que decea Buscar: ";
 	cin>>in;
	while(aux){
		i++;
		if(in==aux->dato){
			cout<<"\nEl elemento "<<aux->dato<<" se encuentra en la posicion "<<i;
			band++;	
		}
		aux=aux->s;
	}
	if(band==0){
		cout<<"No se encontro ningun elemento";
	}
	
}
void editarCola(){
	string in;
	string nu;
	int i=0, band=0;
	if(!u){
		cout<<"\n No hay datos en la cola";
		return;
	}
	aux=p;
	cout<<"\nIngrese el elemento que decea Editar: ";
 	cin>>in;
	while(aux){
		if(in==aux->dato){
			//cout<<"\nEl elemento a ser editado es "<<aux->dato;
			cout<<"\n Ingrese el nuevo elemento ";
			cin>>nu;
			aux->dato=nu;
			band++;
			return;
		}
		aux=aux->s;
	}
	if(band==0){
		cout<<"\nNo se encontro el elemento que decea modificar";
	}
}
 
 //Estructura para la lista 
 typedef struct NodoLista {

  char Nombre[50];

  struct NodoLista *Siguiente;

} Nodo;

//TODOS LOS PROCEDIMINETOS PARA EL MANEJO DE LA LISTA 
int opcion; //variable para el switch de lista
int InsertarElemento(Nodo **Inicio)
{
     Nodo *Elemento = NULL;
     Nodo *Recorrer = NULL;
     Nodo *Ultimo = NULL;
     Recorrer = *Inicio;
     while(Recorrer!=NULL) {
       Ultimo = Recorrer;
       Recorrer=Recorrer->Siguiente;
     }
     // Creamos el nuevo nodo o elemento que se quiere
     // insertar
     Elemento = (Nodo *)malloc(sizeof(Nodo));
     if(Elemento == NULL ) return -1;
     cout<<"\nTeclear Nombre : ";
     cin>>Elemento->Nombre;
     Elemento->Siguiente = NULL;
     if (Ultimo == NULL ) {
        // Es el primero de la lista
        *Inicio = Elemento;
     } else {
        // Es el ultimo de la lista
       Ultimo->Siguiente = Elemento;
     }
     // Salir de la función sin errores
     return 0;
}
void ListarElementos(Nodo *Inicio)
{
     Nodo *Recorrer = Inicio;
     // Se visualiza un mensaje
     cout<<"\nListado de elementos de la lista";
     cout<<"\n===================================";
     while(Recorrer!=NULL)
     {
        // Se visualiza el elemento
        cout<<"\n"<<Recorrer->Nombre;
        // Se cambia al elemento siguiente
        Recorrer=Recorrer->Siguiente;
     }
     cout<<"\n===================================\n";
}
// Función Borrar elemento de la lista al principio
int BorrarElementoListaPrincipio(Nodo **Inicio)
{
    // Variable para almacenar el elemento a borrar
    Nodo *Borrar=NULL;
    if (*Inicio==NULL) {
       cout<<"\nNo hay elementos que borrar\n";
       return -1;
    } else {
      Borrar = *Inicio;
      *Inicio = (*Inicio)->Siguiente;
      free (Borrar);
    }
    return 0;
}
// Función Borrar elemento de la lista al final
int BorrarElementoListaFinal(Nodo **Inicio)
{
    Nodo *Borrar=NULL;;
    Nodo *Recorrer=NULL;
    Recorrer=*Inicio;
    if(Recorrer==NULL) {
     cout<<"\nNo existen elementos que borrar\n";
     return -1;
    }
    // Mientras no se llegue al ultimo elemento
    while(Recorrer->Siguiente!=NULL) {
      Borrar = Recorrer;
      Recorrer= Recorrer->Siguiente;
    }
   if(Borrar==NULL) {
       Borrar = *Inicio;
      *Inicio = NULL;
      free (Borrar);
   } else {
     free(Borrar->Siguiente);
     Borrar->Siguiente=NULL;
   }
    return 0;
}


// Función Borrar elemento de la lista al principio
int BorrarElementoIntermedio(Nodo **Inicio)
{
    // Variables para usar la lista
    Nodo *Recorrer=NULL;
    Nodo *Borrar=NULL;
    Nodo *Anterior=NULL;
    // Variable para solicitar el elemento a borrar
    char NombreBuscar[30];
    int encontrado=0;
    // Solicitar el nombre a eliminar
    cout<<"\nNombre a eliminar: ";
    cin>>NombreBuscar;
    if (*Inicio==NULL) {
       cout<<"\nNo hay elementos que borrar\n";
       return -1;
    } else {
        // Recorrer la lista buscando el elemento
        cout<<"\nBuscando: "<<NombreBuscar;
        Recorrer = *Inicio;
        Anterior = *Inicio;
        while(Recorrer!=NULL && encontrado==0)
        {
            // Se visualiza el elemento
            printf(".");
            if(strcmp(Recorrer->Nombre,NombreBuscar)==0) {
                cout<<"Encontrado Ok\n";
                encontrado=1;
                Borrar = Recorrer;
                if(Recorrer==*Inicio) {
                    *Inicio = Recorrer->Siguiente;
                } else {
                    Anterior->Siguiente = Borrar->Siguiente;
                }
                //Se borra el elemento con la funcion free
                free(Borrar);
            } else {
                // Se cambia al elemento siguiente
                Anterior = Recorrer;
                Recorrer=Recorrer->Siguiente;
            }
        }
    }
    return 0;
}

int BuscarElementos(Nodo **Inicio){
	// Variables para usar la lista
    Nodo *Recorrer=NULL;
    Nodo *Borrar=NULL;
    Nodo *Anterior=NULL;
    string encontrado;
    int i=0, contador=0;
	// Variable para solicitar el elemento a borrar
    char NombreBuscar[30];
    // Solicitar el nombre a eliminar
    cout<<"\nNombre a Buscar: ";
    cin>>NombreBuscar;
    
    if (*Inicio==NULL) {
       cout<<"\nNo hay elementos que borrar\n";
       return -1;
    } else {
        // Recorrer la lista buscando el elemento
        Recorrer = *Inicio;
        Anterior = *Inicio;
        
        while(Recorrer!=NULL){
        	i++;
        	if(strcmp(Recorrer->Nombre,NombreBuscar)==0){
        		encontrado=Recorrer->Nombre;
			    contador++;
			    i++;
			}
		    Recorrer=Recorrer->Siguiente;
        }
        
    }
    if(i==1){
    	cout<<"\nEl nombre "<<encontrado<<" fue encontrado "<<contador<<" veces\n";
	}
	else{
		cout<<"\nEl nombre que acabas de buscar no se ha encontrado";
	}
}

//Estrucutra para el Arbol 
struct arbol
 {
 string dato;
 arbol *i,*d;
 }*elemento, *auxA, *cabecera, *ant, *aux2, *ant2;
 
 //PROCEDIMINETOS PARA EL MANEJO DEL ARBOL 
 string dat; //Variable para cargar datos al arbol 
 
 int buscarArbol();
void insertarArbol();
void buscarmenmay();
void buscarmaymen();
void eliminarArbol();
 
 void menuArbol(){
    int y,opc;
 do
 {
     y=10;   
     cout<<endl<<"0 - Salir";
     cout<<"\t 1 - Insertar";
	 cout<<"\t 2 - Buscar";
     cout<<"\t 3 - Borrar\n";
     cout<<"\nCual es su opcion: "<<endl;
     cin>>opc;
     switch(opc)
                 {
                 case 0: break;
                 case 1: cout<<"\n\nDato a insertar: ";
                 cin>>dat;
                 insertarArbol();
                 cout<<"\n\nDato Insertado";
                 break;
                 case 2: cout<<"\n\nDato a buscar: ";
                 cin>>dat;
                 if(buscarArbol())
                 cout<<"\n\nDato existe";
                 else
                 cout<<"\n\nDato inexistente";
                 break;
                 case 3: cout<<"\n\nDato a borrar: ";
                 cin>>dat;
                 eliminarArbol();
                 break;
                 default: cout<<"\n\nOpcion incorrecta";
                 }
     }while(opc);
 }
 int buscarArbol(){
 if(!cabecera){
	cout<<"No hay arbol";
	return(0);
 }
 ant=NULL;
 auxA=cabecera;
 while(auxA){
 	if (dat==auxA->dato){
 		return(1);
	}else{
 		ant=auxA;
	 	if (dat>auxA->dato){
			auxA=auxA->d;
		}else{
			auxA=auxA->i;	
		}
 	}
 }
 return(0);
 }
 void insertarArbol(){
 if(!cabecera){
	cabecera=new(arbol);
	cabecera->dato=dat;
	cabecera->d=NULL;
	cabecera->i=NULL;
 return;
 }
 if (!buscarArbol()){
	auxA=new(arbol);
	auxA->dato=dat;
	auxA->i=NULL;
	auxA->d=NULL;
	if(dat>ant->dato){
	 	ant->d=auxA;
	}else{
	 	ant->i=auxA;
	}
 }else{
 	cout<<"\n\nDato existente";
 }
 }
 
 void buscarmenmay()
 {
 aux2=auxA->d;
 ant2=auxA;
 while(aux2->i){
 	ant2=aux2;
 	aux2=aux2->i;
 }
 auxA->dato=aux2->dato;
 if(aux2->d){
 	ant2->i=aux2->d;
 }
 delete(aux2);
 ant2->d=NULL;
 }
 
void buscarmaymen()
{
 aux2=auxA->i;
 ant2=auxA;
 while(aux2->d){
 ant2=aux2;
 aux2=aux2->d;
 }
 aux->dato=aux2->dato;
 if(aux2->i){
 	ant2->d=aux2->i;
 }
 delete(aux2);
 ant2->i=NULL;
 }
 void eliminarArbol(void)
 {
 if(!buscarArbol()){
	cout<<"\n\nElemento no encontrado.";
	return;
 }
 if(auxA->d==NULL && auxA->i==NULL){
	if(ant->dato>dat){
		ant->i=NULL;
	}else{
		ant->d=NULL;
	}
	delete(auxA);
 }else{
 	if(auxA->d!=NULL){
 		buscarmenmay();
	}else{
 		buscarmaymen();
 	}
 	cout<<"\n\nElemento Borrado";
 }
}

//programacion orientada a objetos con C++
class Libro{   //se crea la clase
	private:  //se declaran los atrivutos de la clase 
		string nombre;
		string autor;
		string editorial;
		string genero;
		int fechaPulicacion;
	public: //se crean los metodos o las acciones de la clase
		Libro (string, string, string,string, int); //Constructor de la clase 
		void imprimir();
		int anosDeEdicion();
};
//se Hace un constructor para inicializar todas las variables
Libro::Libro(string _nombre, string _autor, string _editorial,string _genero,int _fechaPulicacion){
	nombre = _nombre;
	autor = _autor;
	editorial = _editorial;
	genero = _genero;
	fechaPulicacion = _fechaPulicacion;
}

int Libro::anosDeEdicion(){
	int _anosDeEdicion;
	_anosDeEdicion = (2020 - fechaPulicacion);
	return _anosDeEdicion;
	
}

void Libro::imprimir(){
	cout<<"Titulo del Libro : "<<nombre<<"\n";
	cout<<"Editrial: "<<autor<<"\n";
	cout<<"Años de Edicion : "<<anosDeEdicion()<<"\n";
}

 
 //FUNCION PRINCIPAL 
 int main(){
 	//Variables para guardar los datos del libro 
 	string nombre, autor, editorial, genero;
	int fechaPulicacion;
 	
	//INICIALIZA LA ETRUCTURA DE LA LISTA
    Nodo *Inicio = NULL;
    int opcion=0;
    int opcion2=0;
    int eleccion1=0;
    int eleccion2=0;
	do {
        cout<<"\n1.- Generar una estructura de datos lineal.";
        cout<<"\n2.- Generar un árbol.";
        cout<<"\n3.- Registrar Libro.";
        cout<<"\n0.- Salir del programa.";
        cout<<"\n=====================================";
        cout<<"\nOpcion ...: ";
        cin>>eleccion1;
        switch(eleccion1) {
          case 0: exit(1);
          
          case 1:
               cout<<"\n(0) Salir.";
               cout<<"\n(1) Generar Lista.";
               cout<<"\n(2) Generar Pila.";
               cout<<"\n(3) Generar Cola.";
               cout<<"\n.... ";
               cin>>eleccion2;
               switch(eleccion2) {
               	 case 0: exit(1);
                 case 1:
				 		// Visualizar el menu de opciones DE LISTAS
					    do {
					        cout<<"\n1.- Insertar elemento en la lista.";
					        cout<<"\n2.- Listar elementos de la lista.";
					        cout<<"\n3.- Borrar elemento de la lista.";
					        cout<<"\n4.- Buscar elemento en la lista.";
					        cout<<"\n0.- Salir del programa.";
					        cout<<"\n=====================================";
					        cout<<"\nOpcion ...: ";
					        cin>>opcion;
					        switch(opcion) {
					          case 0: exit(1);
					
					          case 1:
					               // Insertar elemento de la lista
					               // El puntero de inicio se ha de pasar por referencia
					               // ya que es puede verse afectado si se inserta el primer
					               // elemento de la lista
					               InsertarElemento(&Inicio);
					               break;
					
					          case 2:
					
					               // Listar elementos de la lista
					               ListarElementos(Inicio);
					               break;
					          case 3:
					               printf("\n(0) Volver Menu Anterior.");
					               printf("\n(1) Borrar al final.");
					               printf("\n(2) Borrar al principio.");
					               printf("\n(3) Borrar Intermedio.");
					               printf("\n.... ");
					               scanf(" %d",&opcion2);
					
					               switch(opcion2) {
					
					                 case 1:
					
					                      BorrarElementoListaFinal(&Inicio);
					
					                      break;
					
					                 case 2:
					
					                      BorrarElementoListaPrincipio(&Inicio);
					
					                      break;
					                 case 3:
					
					                      BorrarElementoIntermedio(&Inicio);
					                      break;
					                 default: cout<<"\n Opcion no valida"; break;
					               }
					    		case 4:
					    			
					    			BuscarElementos(&Inicio);
					               break;
					            default: cout<<"\n Opcion no valida!!"; break;
					        }
					    } while(opcion!=0);
						break;
                 case 2:
                      menuPila();
                      break;
                 case 3:
                 		menuCola();
                      break;
                 default: cout<<"\n Opcion no valida"; break;
               }
    		case 2:
    			menuArbol();
               break;
            case 3:
					cout<<"Ingrese El Titulo del libro\n";
					cin>>nombre;
					cout<<"Ingrese Quien es el Autor \n";
					cin>>autor;
					cout<<"Cual es el editorial\n";
					cin>>editorial;
					cout<<"A que Genero Pertenece\n";
					cin>>genero;
					cout<<"Año en la que fue Publicada";
					cin>>fechaPulicacion;
					Libro libro(nombre, autor, editorial, genero, fechaPulicacion);
					
					libro.anosDeEdicion();
					libro.imprimir();
            	break;
        }
    } while(opcion!=0);
    return 0;
}
 
 
