/*Programa para calcular o resultado 
da situação do aluno se está aprovado 
ou reprovado. Vamos levar em consideração 
a nota do aluno e compará-la a média de aprovação da escola. Caso a nota 
seja maio ou igual a 7, então o aluno
estará aprovado, caso contrario estará 
reprovado*/

/*Incluir o cabeçalho de entrada e saída de 
dados padrão: std(Standard -> Padrão)io
(input|output)*/
#include <stdio.h>

//definir uma constante. Sempre em letras Maiusculas
#define mediaescolar 7.0

int main()
{
    //declaração da variavel notaAluno com tipo float
    float notaAluno;
    printf("Digite a nota do aluno e aperte ENTER\n");
    scanf("%f", &notaAluno);

    //Desvio de fluxo com if .. else
    if(notaAluno >= mediaescolar){
         printf("O aluno está aprovado!!\n");
}
else{
    printf("O aluno está reprovadon\n");
    }
    return 0;
}    