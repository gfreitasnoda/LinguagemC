#include <stdio.h> //biblioteca standard de Input/Output
int main()
{
    int num1, num2, sobra, divisao;  
    printf("Digite um numero para ser dividido e aperte ENTER\n");
    scanf("%d", &num1);
    printf("Digite outro numero para a divisão e aperte ENTER\n");
    scanf("%d", &num2);
    divisao = num1 / num2;
    sobra = num1%num2;
    printf("o resultado da divisão é %d", divisao);
    printf("a sobra da divisao é %d", sobra);
    return 0;
}