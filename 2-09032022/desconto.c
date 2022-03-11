#include <stdio.h>
int main ()
{
    float valor, desc, preco, des;
    printf("Digite o valor\n");
    scanf("%f",&valor);//& comercial para nao dar erro para reconhecer o valor

    printf("digite o desconto\n");
    scanf("%f", &desc);

    desc = desc/100; //calculo do desconto em precentual
    des = desc * valor;// calculo do impacto no preço
    preco = valor - des;//calculando o preço final

    printf("o preço é %f\n o descontodo produto é %f\n", preco, des);
    //comunicação com o cliente separando o preço final com o desconto
    return 0;
}