
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int dolz(char* s, char* t){
    int i = 0;
    while(s[i] != '\0' && t[i] != '\0' && s[i] == t[i]){
        i++;
    }
    return i;
}

int* skladnost(char* s, char* t, int* maks) {
    int dolzina = 0;
    int max = 0;
    for(dolzina = 0; t[dolzina] != '\0'; dolzina++);
    
    int* temp = calloc(dolzina, sizeof(int));
    for(int i = 0; i < dolzina; i++){
        int tt = dolz(s,&t[i]);
        if(tt > max){
            max = tt;
        }
        temp[i] = tt;
    }
    *maks = max;
    return temp;
}

int main() {
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
