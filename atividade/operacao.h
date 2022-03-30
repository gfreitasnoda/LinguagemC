#include <stdio.h>
#include <stdlib.h>
#include "cursos.h"
#include "unidades.h"

void gravar(){

    FILE *arquivo;
    //FILE para criar os arquivos e ficar alocado na memoria e vaiser feito
    //por ponteiro

    arquivo = fopen("dados_curso.txt", "w");
    //fopen para verificar se o arquivo existe na memoria

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //fechar o programa
    }    
    curso curs, *pcurs;
    unidade unid, *punid;

    pcurs = &curs;
    punid = &punid;

    printf("Entre com o nome do curso: \n");
    fgets(pcurs->nomecurso,30,stdin);

    printf("Digite a descrição do curso: \n ");
    fgets(pcurs->desc,200,stdin);

    printf("Digite a carga horaria do curso: \n");
    fgets(pcurs->carhoraria,22,stdin);

    printf("Digite a data de inicio do curso: \n");
    fgets(pcurs->datainicio,10,stdin);

    printf("Digite a data de termino do curso: \n");
    fgets(pcurs->datatermino,10,stdin);

    printf("Digite o preço do curso: \n");
    fgets(pcurs->preco,20,stdin);

    printf("Digite o nome da unidade: \n");
    fgets(punid->nomeuni,20,stdin);

    printf("Digite o local da unidade: \n");
    fgets(punid->local,50,stdin);

    printf("Digite o horario de funcionamento da unidade: \n");
    fgets(punid->horario,16,stdin);

    printf("Digite o telefone da unidade: \n");
    fgets(punid->telefone,20,stdin);

    printf("Digite o CEP da unidade: \n");
    fgets(punid->cep,10,stdin);

//gravar o nome do arquivo
    fprintf(arquivo,pcurs->nomecurso);
    fprintf(arquivo,pcurs->desc);
    fprintf(arquivo,pcurs->carhoraria);
    fprintf(arquivo,pcurs->datainicio);
    fprintf(arquivo,pcurs->datatermino);
    fprintf(arquivo,pcurs->preco);
    fprintf(arquivo,punid->nomeuni);
    fprintf(arquivo,punid->local);
    fprintf(arquivo,punid->horario);
    fprintf(arquivo,punid->telefone);
    fprintf(arquivo,punid->cep);

    //tirar arquivo da memoria. Fechar o arquivo
    fclose(arquivo);
}
