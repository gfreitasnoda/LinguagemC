/* Programa para calcular o desconto de 
um funcionario. Onde o salario sendo 
maior que 5000, tera um desconto de 
5%. Caso contrario nao haverá desconto
*/
#include <stdio.h>

#define LIMITE 5000.00

int main (){
    float salariofuncionario;
    printf("Digite o salario do funcionario e aperte ENTER\n");
    scanf("%f" ,&salariofuncionario);
    if(salariofuncionario > LIMITE){
        printf("O desconto será de %f\n", salariofuncionario*5/100);
        printf("O valor final é%f\n", salariofuncionario - (salariofuncionario*5/100));  
    }
    else{
        printf("Não há desconto\n");
    }
    return 0; 
}