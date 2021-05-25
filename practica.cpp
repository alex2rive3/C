#include"iostream"
using namespace std;
int main()
{
	int a,b,c,d,menor,mayor,suma;
	float promedio;
	cout<<"Ingrese cuatro numeros"<<"\n";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	mayor=0;
	menor=0;
	suma=a+b+c+d;
	promedio=suma/4;
	if(a>b and a>c and a>d){
		mayor=a;
	}
	else{
		if(b>a and b>c and b>d){
			mayor=b;
		}
		else{
			if(c>a and c>b and c>d){
				mayor=c;
			}
			else{
				mayor=d;
				}
			}
	}
	
	
	if(a<b and a<c and a<d){
	menor=a;
	}	
	else{
		if(b<a and b<c and b<d){
			menor=b;
		}
		else{
			if(c<a and c<b and c<d){
				menor=c;
				}
			else{
				menor=d;
				}
			}
		}
	cout<<"El mayor es "<<mayor<<"\n";
	cout<<"El menor es "<<menor<<"\n";
	cout<<"La suma es "<<suma<<"\n";
	cout<<"El promedio es "<<promedio<<"\n";
}

//ultimo ejercici que no nos salia ebn clases
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
    int gana[7],a=0,b=0;
    srand(time(NULL));
    for(int i=1;i<=7;i++){
        n=1+rand()%(101-1);
        while(b<i){
            if(n!=gana[b]){
                n2++;
            }
            else{
                n=1+rand()%(101-1);
                n2=0
            }
        }
        gana[i]=n;
        cout<<"Los numeros ganadores son: "<<gana[i]<<"\n";
    }
    return 0;
}

