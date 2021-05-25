#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main(){
    int gana[7],a=0,b=0;
    srand(time(NULL));
    for(int i=1;i<=7;i++){
        a=1+rand()%(101-1);
        while(b<i){
            if(a!=gana[b]){
                b++;
            }
            else{
                a=1+rand()%(101-1);
                b=0;
            }
        }
        gana[i]=a;
        cout<<"Los numeros ganadores son: "<<gana[i]<<"\n";
    }
    return 0;
}
