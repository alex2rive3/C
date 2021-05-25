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
void cargarX(int n1,int n2){
    if(n1<=2 && n2<=2){
        if(matriz[n1][n2]=="."){
            matriz[n1][n2]="X";
	        }
	    }
}
void cargarO(int nu1,int nu2){
    if(nu1<=2 && nu2<=2){
        if(matriz[nu1][nu2]=="."){
            matriz[nu1][nu2]="O";
	        }
	    }
}
int main()
{
    limat();
    cout<<"\n";
    cout<<"************************************* \n"<<"LAS COORDENADAS QUE PUEDES PONER SON \n";
    cout<<"00 01 02\n"<<"10 11 12\n"<<"20 21 22 \n"<<"*************************************\n";
    while(a<=2){
    	cout<<"Ingrese las coordenadas para ingresar una X:  ";
	    cin>>n1>>n2;
	    cargarX(n1,n2);  //funcion para cargar las x
	    cout<<"Ingrese las coordenadas para ingresar una O:  ";
	    cin>>nu1>>nu2;
	    cargarO(nu1,nu2);  //funcion para cargar los o
	    a++;
	    }
	cout<<"\n";
	imprimir();
    if(matriz[0][0]=="X" and matriz[1][1]=="X" and matriz[2][2]=="X"){
        cout<<"Ganaste!"<<"\n";
    }
    else{
        if((matriz[2][0]=="X") and (matriz[1][1]=="X") and (matriz[0][2]=="X")){
            cout<<"Ganaste!"<<"\n";
        }
        else{
            if((matriz[0][0]=="X") and (matriz[0][1]=="X") and (matriz[0][2]=="X")){
                cout<<"Ganaste!"<<"\n";
            }
            else{
                if((matriz[1][0]=="X") and (matriz[1][1]=="X") and (matriz[1][2]=="X")){
                cout<<"Ganaste!"<<"\n";
                }
                else{
                    if((matriz[2][0]=="X") and (matriz[2][1]=="X") and (matriz[2][2]=="X")){
                        cout<<"Ganaste!"<<"\n";
                    }
                    else{
                        if((matriz[0][0]=="X") and (matriz[1][0]=="X") and (matriz[2][0]=="X")){
                            cout<<"Ganaste!"<<"\n";
                        }
                        else{
                            if((matriz[0][1]=="X") and (matriz[1][1]=="X") and (matriz[2][1]=="X")){
                                cout<<"Ganaste!"<<"\n";
                            }
                            else{
                                if((matriz[0][2]=="X") and (matriz[1][2]=="X") and (matriz[2][2]=="X")){
                                    cout<<"Ganaste!"<<"\n";
                                }
                                else{
                                    cout<<"Perdiste =("<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(matriz[0][0]=="O" and matriz[1][1]=="O" and matriz[2][2]=="O"){
        cout<<"Ganaste!"<<"\n";
    }
    else{
        if((matriz[2][0]=="O") and (matriz[1][1]=="O") and (matriz[0][2]=="O")){
            cout<<"Ganaste!"<<"\n";
        }
        else{
            if((matriz[0][0]=="O") and (matriz[0][1]=="O") and (matriz[0][2]=="O")){
                cout<<"Ganaste!"<<"\n";
            }
            else{
                if((matriz[1][0]=="O") and (matriz[1][1]=="O") and (matriz[1][2]=="O")){
                cout<<"Ganaste!"<<"\n";
                }
                else{
                    if((matriz[2][0]=="O") and (matriz[2][1]=="O") and (matriz[2][2]=="O")){
                        cout<<"Ganaste!"<<"\n";
                    }
                    else{
                        if((matriz[0][0]=="O") and (matriz[1][0]=="O") and (matriz[2][0]=="O")){
                            cout<<"Ganaste!"<<"\n";
                        }
                        else{
                            if((matriz[0][1]=="O") and (matriz[1][1]=="O") and (matriz[2][1]=="O")){
                                cout<<"Ganaste!"<<"\n";
                            }
                            else{
                                if((matriz[0][2]=="O") and (matriz[1][2]=="O") and (matriz[2][2]=="O")){
                                    cout<<"Ganaste!"<<"\n";
                                }
                                else{
                                    cout<<"Perdiste =("<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
 }
