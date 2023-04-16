
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga2.h"

/*
 * Testni primeri J1--J2 in S1--S10 testirajo rezultat funkcije.
 * Testni primeri J3--J4 in S11--S20 testirajo vrednost spremenljivke, na
 *     katero ka"ze kazalec <indeks>.
 *
 * Test cases J1--J2 and S1--S10 check the result of the function.
 * Test cases J3--J4 and S11--S20 check the value of the variable pointed to
 *     by <indeks>.
 */
int steviloInKta(char* niz, int k, int* indeks) {
    int stevec = 0;
    int i = 0;
    while(stevec != k && niz[i] != '\0'){
        if(niz[i] <= 'Z' && niz[i] >= 'A'){
            stevec++;
        }
        i++;
    }
    if(stevec != k){
        *indeks = -1;
    }else{
        *indeks = i-1;
    }
    while(niz[i] != '\0'){
        if(niz[i] <= 'Z' && niz[i] >= 'A'){
            stevec++;
        }
        i++;
    }
    return stevec;
}

void indeksi(char* niz, int** t) {
    int indeks;
    int dolzina = steviloInKta(niz, 1, &indeks);
    int* obratno = (int*)calloc(dolzina+1, sizeof(int));
    int i = 0;
    int d;
    for(dolzina; dolzina > 0; dolzina--){
        d = steviloInKta(niz, dolzina, &indeks);
        obratno[i] = indeks;
        i++;
    }
    obratno[d]=-1;
    *t = obratno;
}

char** zadnje(char** nizi) {
    int i = 0;
    int indeks;
    int d=0;
    for(d; nizi[d] != NULL; d++);
    char** tabela = (char**)calloc(d, sizeof(char*));
    while(nizi[i] != NULL){
        int dolzina = steviloInKta(nizi[i], 1, &indeks);
        if(dolzina == 0){
            tabela[i] = NULL;
        }else{
            int dwd = steviloInKta(nizi[i], dolzina, &indeks);
            tabela[i] = &(nizi[i][indeks]);
        }
        i++;
    }
    return tabela;
}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
