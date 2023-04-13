#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

char* zdruzi(char** nizi, char* locilo) {
    char* kazalec = nizi[0];
    int j = 0;
    int h = 0;
    while (kazalec != NULL){
        h++;
        for(int i = 0; kazalec[i] != '\0'; i++){
            j++;
        }
        kazalec = nizi[h];
        if(kazalec != NULL){
            for(int i = 0; locilo[i] != '\0'; i++){
                j++;
            }
        }
    }
    char* tab = calloc(j, sizeof(char));

    kazalec = nizi[0];
    j= 0;
    h=0;
    while (kazalec != NULL){
        h++;
        for(int i = 0; kazalec[i] != '\0'; i++){
            tab[j] = kazalec[i];
            j++;
        }
        kazalec = nizi[h];
        if(kazalec != NULL){
            for(int i = 0; locilo[i] != '\0'; i++){
                tab[j] += locilo[i];
                j++;
            }
        }
    }
    return tab;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje
    return 0;
}

#endif
