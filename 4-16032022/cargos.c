//Programa para ilustrar os salarios dos cargos
#include <stdio.h>


int main(){

    char cargo [15];

    printf("Digite um cargo e aperte ENTER\n");
    scanf("%s",cargo);

    if(strcmp(cargo, "diretor")==0){
        printf("O salario do Diretor é 15.000,00");
    }
    else if(strcmp(cargo, "gerente")==0){
        printf("O salario do Gerente é 12.000,00");
    }
    else if(strcmp(cargo, "analista")==0){ 
        printf("O salario do Analista é 8.000,00");
    }
    if(strcmp(cargo, "auxiliar")==0){
        printf("O salario do Auxiliar é 4.000,00");
    }
    else if(strcmp(cargo, "assistente")==0){
        printf("O salario do Assistente é 2.000,00");
    }
    else if(strcmp(cargo,  "outros")==0){
        printf("Não ha salario");
    }
    return 0;

}