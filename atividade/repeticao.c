#include <stdio.h>
#include <stdlib.h>
void main(){
    float num, soma=0, media=0;
    int i;
    //inicio do laço for
   for (i=1; 1<=10; i++){
    // a partir deste ponto são as instruções
    //que devem ser executados nas iterações
    printf("informe o numero e aperte ENTER\n");
    scanf("%f", &num);
    soma += num;
}
    //a media deve ser calculada apos a iteração
    media = soma / 10;
    printf("A media é: %f", media);
}