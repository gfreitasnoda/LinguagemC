#include <stdio.h>
#include <stdlib.h>
void main (){
    char nome[30];
    int idade, bemAlimentado, resfriado;
    float peso;
    printf("Informe seu nome: \n");
    scanf("%s", &nome);
    printf("Informe seu peso: \n");
    scanf("%f", &peso);
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    printf("Está bem alimentado ? <1-Sim / 0-Não>\n");
    scanf("%d", &bemAlimentado);
    printf("Está resfriado? <1-Sim / 0 Não>\n");
    scanf("%d", &resfriado);
    if (peso >= 50 &(idade >=16 && idade <= 69)&& bemAlimentado && !resfriado){
        printf("O voluntario %s está apto!!\n", nome);
    }
    else{
        printf("O voluntario %s NAO esta apto\n", nome);
    }
}