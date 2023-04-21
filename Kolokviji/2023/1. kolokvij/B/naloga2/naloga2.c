
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga2.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Javni testni primeri (po te"zavnosti):
 * -- 02, 03: dol"zina vsakega vhodnega niza je enaka ciljnaDolzina;
 * -- 04, 05, 06, 07: dol"zina vsakega vhodnega niza je enaka 1;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 04: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

//=============================================================================

char** naSredino(char** nizi, int ciljnaDolzina) {
    int i=0;
   
    while(nizi[i] != NULL){
        i++;
    }
    char** tab = (char**)malloc((i+1)*sizeof(char*));
    
    for(int j= 0; j<i; j++){
        int dolzina = 0;
        tab[j] = (char*)malloc((ciljnaDolzina+1)* sizeof(char));
        for(dolzina; nizi[j][dolzina] != '\0'; dolzina++ );
        int temp = (ciljnaDolzina - dolzina)/2;
        for(int k = 0; k < temp; k++){
            tab[j][k] ='.';
        }
        for(int k = 0; k < dolzina; k++){
            tab[j][temp+k] = nizi[j][k];
        }
        for(int k = temp+dolzina; k < ciljnaDolzina; k++){
            tab[j][k] = '.';
        }
        tab[j][ciljnaDolzina] ='\0'; 
    }
    tab[i] = NULL;
    return tab;
}

//=============================================================================

#ifndef test

int main() {
/*
    char* NIZI[] = {
    "Danes",
    "je",
    "kolokvij",
    "pri_P2!",
    NULL
};
char** izhodni = naSredino(NIZI, 9);
    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);*/
    return 0;
}

#endif
