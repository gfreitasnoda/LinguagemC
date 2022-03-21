/*
Programa para calcular cpf do usuario ,
Quando inserido, pegmaos os 9 primeiros 
digitos e passamos para o calculo.
é utilizado um numero por vez do cpf
multiplicando pelo peso partindo
de 10 até 2.
Na segunda parte do calculo pegamos os 9
primeiros mais o digito encontrados e multiplicamos pelo peso 
a partir de 11. Soma se os valores encontrados e dividimos por 11 
Se o resto da divisão for menor que 2 entao o digito será 0; caso
contrario o resto será subtraido por 11
*/
#include <stdio.h>
int main(){

    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf [11]; 
    
    system("clear");
    printf("Digite o seu cpf sem o traço e aperte ENTER\n");
    scanf("%s",cpf);
    //converetr todos os caracteres do cpf
    //numero inteiro para isso temos que criar 
    //um conjunto de numeros em int e realizar a conversão usando for
    int icpf[11];
    for(int x = 0; x <=10 ; x++){
        icpf[x] = cpf[x] - 48;
    }

    for(int i = 0; i <= 8 ; i++){
        total +=icpf[i]*peso10;
        peso10--;
    }

    resto = total % 11;
    /* se o resto da divisão for menor que 2, então 
    o primeiro digito de verificação será 0(zero)
    */
    if(resto < 2){
        icpf[9]=0;
    }
    
    else{
        icpf[9] = 11 - resto;
    }
    total = 0;
    resto = 0;

    for(int i = 0 ; i <= 9 ; i++){
        total += icpf[i]*peso11;
        peso11--;
    }
    
    resto = total % 11;
    
    if(resto < 2){
        icpf[10] = 0;
    }
    
    else{
        icpf[10] = 11 - resto;    
    }
    
    for(int i = 0 ; i <= 10 ; i++){
        printf("%d" ,icpf[i]);
    }
    
    printf("\n");
    
    return 0;
}