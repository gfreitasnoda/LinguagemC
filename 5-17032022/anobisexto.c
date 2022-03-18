//programa pra calcular os ano bisexto de 1950 ate 2022
#include <stdio.h>
int main(){
    
    int qtd = 0;
    int ano;

    for( ano = 1950; ano <= 2022; ano ++){
    if(ano % 4 == 0){
        printf("%d é bisexto\n", ano);
        qtd++;
    }

    
    }
    printf("Encontramos %d anos bisextos\n", qtd);
    return 0;
}