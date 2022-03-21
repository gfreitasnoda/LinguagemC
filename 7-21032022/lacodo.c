/*
Programa para apresentar numeros pares entre
 0 e 50 vamos usar
 a estrutura while 
*/

#include <stdio.h>

int main(){
    int i = 0;
    do{
        if(i%2==0){
            printf("O numero %d é par\n",i);
        }
        i++;

    }while(i<=50);


    return 0;    
}