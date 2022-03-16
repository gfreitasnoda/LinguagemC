/* 
Prgograma pede ao usuario que digite 
seu nome. Ao fazer sera alocado 
na variavel nome
*/
#include <stdio.h>

int main(){

    char nome[30];

    printf("Digite o seu nome e aperte ENTER:\n");
    scanf("%s", nome); //scanf é usado %s para captar uma cadeia de caracteres
    printf("%s\n", nome);  
    
    return 0;
}