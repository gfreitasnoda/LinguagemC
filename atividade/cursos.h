#include <stdio.h>
#include <stdlib.h>
//Programa para dar informção sobre os cursos do senac

typedef struct dados_curso
{
    char nomecurso[30];
    char carhoraria[22];
    char datainicio[10];
    char datatermino[10];
    char preco[20];
    char desc[200];
    //char para comunicar ao cliente os dados do curso 
}curso;//apelido do curso