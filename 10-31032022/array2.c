/*
Programa que realiza a soma usando array
*/
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

void main(){
    int v[10]={0,23,53,4,9,6,3,56};
    soma(v,10);
    menorValor(v,10);
    maiorValor(v,10);
    ordenar(v,10);
}