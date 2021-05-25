#include <iostream>
#include <stdlib.h>
using namespace std;
int a=0,n1=0,n2=0,nu1=0,nu2=0;
string matriz[3][3];
void limat(){
    for(int x=0;x<=2;x++){
        for(int i=0;i<=2;i++){
            matriz[x][i]=".";
        }
    }
    for(int x=0;x<=2;x++){
        for(int i=0;i<=2;i++){
            cout<<matriz[x][i];
        } 
        cout<<"\n";
    }
}
void imprimir(){
    for(int x=0;x<=2;x++){
        for(int i=0;i<=2;i++){
            cout<<matriz[x][i];
        }
        cout<<"\n";
    }
}
int cargarx(int n1,int n2){
	for(int i=0;i<=2;i++){
	    if(n1<=2 && n2<=2){
	        if(matriz[n1][n2]=="." and matriz[n1][n2]=="O"){
	            matriz[n1][n2]="X";
	        }
	    }
	}
}
int main()
{
    limat();
    cout<<"\n";
    while(a<=2){
    	cout<<"Ingrese la coordenada en deonde decea poner una X";
    	cin>>n1>>n2;
    	cargarx(n1,n2);
    	a++;
	    }
	    imprimir();
	}
	
