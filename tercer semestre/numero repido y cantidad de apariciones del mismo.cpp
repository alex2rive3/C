#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int numeros[100], repit=0,cont=0;
    
    for(int i=0; i<=99; i++){
        numeros[i]=1+ rand()%100;
        cout<<numeros[i]<<endl;
    }
    
    for(int i=0; i<=99; i++){
        for(int a=i++;a<=99; a++){
            numeros[i];
            if(numeros[i]==numeros[a]){
                repit=numeros[i];
                i=100;
                a=100;
            }
        }
    }
    for(int i=0; i<=99; i++){
        numeros[i];
        if(numeros[i]==repit){
            cont=cont+1;
        }
    }
    cout<<"Le numero repetido es "<<repit<<endl;
    cout<<"El numero se repitio "<<cont<<" veces";
    
    return 0;
}

