#include <stdio.h> //biblioteca standard de Input/Output
int main()
{
    char car;                                //declara var, car do tip char
    printf("Digite um caractere e ENTER\n"); //mostra na tela
    scanf("%c", &car);                       //%c para ler ou mostrar char 1 char          
    printf("Caractere digitando e' %c\n", car);
    return 0;
    //mostrou na tela valou de car lido
} // fim main