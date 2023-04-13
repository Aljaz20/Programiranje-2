
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int** ap2pp(int(*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic) {
    int stevilo = (N * izvornoStVrstic + ciljnoStVrstic) / ciljnoStVrstic;
    int** tabela = (int**)calloc(ciljnoStVrstic, sizeof(int*));
    for(int i = 0; i < ciljnoStVrstic; i++){
        tabela[i] = (int*)calloc(stevilo, sizeof(int));
    }
    int j = 0;
    int l = 0;
    for(int i = 0; i < izvornoStVrstic; i++){
        for(int k = 0; k < N; k++){
            tabela[l][j] = kazalec[i][k];
            j++;
            if(j+1==stevilo){
                tabela[l][j] = 0;
                j = 0;
                l++;
                if(l == ciljnoStVrstic){
                    break;
                }
            }
        }
    }
    return tabela;
}

int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N] {
    int stevilo = 0;
    for(int i = 0; i < izvornoStVrstic; i++){
        for(int j = 0; kazalec[i][j] != 0; j++){
            stevilo++;
        }
    }
    if(stevilo % N == 0){
        *ciljnoStVrstic = stevilo / N;
    }else{
        *ciljnoStVrstic = stevilo / N + 1;
    }
    int* tabela = (int*)calloc(*ciljnoStVrstic*N, sizeof(int));
    int j = 0;
    for(int i = 0; i < izvornoStVrstic; i++){
        for(int k = 0; kazalec[i][k] != 0; k++){
            tabela[j] = kazalec[i][k];
            j++;
            
        }
    }
    if(j != *ciljnoStVrstic*N){
        for(int i = j; i < *ciljnoStVrstic*N; i++){
            tabela[j] = 0;
        }
    }

    return (int (*)[N])tabela;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}

#endif
