/*Programa para calcular a situação 
do aluno neste programa teremos
as seguintes saídas:
    Aprovado, quando tiver nota maior ou igual a 7
    Reprovado, quando nota menor ou igual a 4
    Recuperação, quando nota maior que 4 e menor que 7
    */
#include <stdio.h>

#define MEDAPROV 7.0
#define MEDREPROV 4.0

int main (){
    float nota;
    printf("Digite a nota do aluno e aperte ENTER\n");
    scanf("%f", &nota);

    if (nota >= MEDAPROV){
        printf("O aluno está aprovado\n");
    }
    else if (nota <=MEDREPROV){
        printf("O aluno está reprovado\n");
    }
    else{
        printf("O aluno está de recuperação\n");
    }
    return 0;
}