//Programa para calcular as quatro operações
#include <stdio.h> // biblioteca standard de Input/Output
int main()
{
    int num1, num2, soma, subtracao, multiplicacao, divisao; // os dois valores para serem feitos as operações
    //mostra uma mensagem em printf na tela
    printf("Digite um numero inteiro para ser feito calculo e aperte ENTER\n");
    scanf("%d", &num1); //memorizando numero
    //outra mensagem pedindo outro valor em printf 
    printf("Digite outro numero inteiro para ser calculado e aperte ENTER\n");
    scanf("%d", &num2);
    soma = num1+num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    printf("O resultado do calculo é %d", soma);
    printf("O resultado do calculo é %d", subtracao);
    printf("O resultado do calculo é %d", multiplicacao);
    printf("O resultado da divisao é %d", divisao);
    return 0;
}//fim