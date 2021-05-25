#include <iostream>
#include <cstdlib>
#include<time>
#include <random>
using namespace std;
int f=2,c=2;
string matriz[3][3];
string aux;
void limat(){
	for(int x=0;x<=f;x++){
		for(int i=0;i<=c;i++){
			matriz[x][i]=".";
		}
	}
	for(int x=0;x<=f;x++){
		for(int i=0;i<=c;i++){
			cout<<matriz[x][i];
		}
		cout<<"\n";
	}
}
int main()
{
    limat();
    int x,i;
    int xa,ia,n=0;
    while(n<=2){
        srand(time(NULL));
        xa=rand()%3;
        ia=rand()%3;
        matriz[xa][ia];
        aux=matriz[xa][ia];
        if(aux=="."){
            matriz[x][i]="x";
            n++;
        }
        else{
            n--;
        }
    for(int x=0;x<=f;x++){
		for(int i=0;i<=c;i++){
			cout<<matriz[x][i];
		}
		cout<<"\n";
        }
        
    }
}