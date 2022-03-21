/* 
Programa para manter a tel ativa.
Caso o usuario digite 9, então a tela será liberada
*/

#include <stdio.h>

int main(){
    int op = 0;
    printf("Digite um numero para sair e aperte ENTER\n");
    scanf("%d",&op);
    while(op != 9){
        system("clear");
        printf("\n Você errou ....... !! | :p\n");
        
        printf("Tente outra vez e aperte ENTER\n");
        scanf("%d",&op);
    }    
    
    return 0;

}