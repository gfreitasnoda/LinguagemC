//Programa pra soma de numeros inteiros 
#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma, num1, num2;
    printf("Digite um numero e aperte ENTER\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero e aperte ENTER\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado da soma :%d\n", soma);

}