#include <stdio.h>
#include <stdlib.h>
void main(){
    int cargo;
    float salAtual, reajuste;
    printf("Digite o cargo do funcionario: \n");
    scanf("%d", &cargo);
    printf("Digite o salario atual\n");
    scanf("%f", &salAtual);
    
    if (cargo == 1){
        reajuste = (salAtual * 7) / 100;
    }
    else if (cargo == 2){
        reajuste = (salAtual * 9) / 100;
    }
    else if (cargo == 3){
        reajuste = (salAtual *5) / 100;
    }
    else{
        reajuste = (salAtual * 12) / 100;
    }
    printf("O reajuste é: %f\n", reajuste);
    printf("O novo salario é: %f\n", salAtual + reajuste);

}