/*
Este arquivo foi nomeado com a extensão 
.h(header->cabeçalho "biblioteca"). Assim 
podemos criar algumas funções e\ou estruturas 
compartilhadas sendo possivel se 
utilizadas por diversos programas
todas as vezes que esta biblioteca for usada é usada, é importante
realizar a sua inclusão no codigo que ir utiliza-la.
*/
#include <stdio.h>
#include <stdlib.h>

void separador (){
    printf("\n");
    for(int i = 0; i <= 100 ; i++){
    printf("#");
    }   
    printf("\n");
}
void quebraLinha (int qtdVezes){
    for(int i = 1; i <= qtdVezes ; i++){
    printf("\n");
    }
}


