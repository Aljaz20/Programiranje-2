
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int steviloZnakov(char* niz, char znak) {
    int stevilo = 0;

    for(int i = 0; niz[i] != '\0'; i++){
        if(niz[i] == znak){
            stevilo++;
        }
    }
    return stevilo;
}

char* kopirajDoZnaka(char* niz, char znak) {
    int dolzina = 0;
    for(dolzina; niz[dolzina] != '\0' && niz[dolzina] != znak; dolzina++);
    char* kopija = (char*)calloc(dolzina, sizeof(char));
    
    for(int i = 0; i < dolzina; i++){
        kopija[i] = niz[i];
    }
    kopija[dolzina] = '\0'; //nimam pojma zakaj???
    return kopija;
}

char* kopirajDoZnakainzbrisi(char* niz, char znak, int pointer) {
    int dolzina = 0;
    for(dolzina; niz[dolzina+pointer] != '\0' && niz[dolzina+pointer] != znak; dolzina++);
    char* kopija = (char*)calloc(dolzina, sizeof(char));
    
    for(int i = 0; i < dolzina; i++){
        kopija[i] = niz[i+pointer];
    }
    kopija[dolzina] = '\0';
    return kopija;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    *stOdsekov = steviloZnakov(niz, locilo) + 1;
    char** tabela = calloc(*stOdsekov, sizeof(char*));
    char* temp = niz;
    int pointer = 0; 
    for(int i = 0; i < *stOdsekov; i++){
        tabela[i] = kopirajDoZnakainzbrisi(temp,locilo, pointer);
        for(int j = pointer; temp[j] != '\0'; j++){
            if(temp[j] == locilo){
                pointer = j+1;
                break;
            }
        }
    }
    return tabela;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    char* vtr = "eeeee";
    printf("%d", steviloZnakov(vtr, 'e'));

    return 0;
}
