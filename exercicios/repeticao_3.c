#include <stdio.h>
#include <stdlib.h>
void main(){
    int i=1, n, soma=0;
    printf("Informe o numero n: \n");
    scanf("%d", &n);
    while(i <= n){
        soma += i;
        i++;
    }
    printf("soma: %d \n", soma);
}
