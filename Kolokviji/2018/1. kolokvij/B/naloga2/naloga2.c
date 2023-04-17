
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
int pojavitve(char* niz, char c, int* indeks) {
    int pojavitve = 0;
    for(int i = 0; niz[i] != '\0'; i++){
        if(niz[i] == c){
            if(pojavitve == 0){
                *indeks = i;
            }
            pojavitve++;
        }
    }
    if(pojavitve== 0){
        *indeks = -1;
    }
    return pojavitve;
}

void naslednjaPojavitev(char* niz, int* indeks) {
    char c = niz[*indeks];
    niz += *indeks +1;
    int ind = *indeks+1;
    int a = pojavitve(niz, c, indeks);
    if(*indeks != -1){
        *indeks += ind;
    }
}

char* kopijaPodniza(char* niz, char c, int k) {
    int pojavitve = 0;
    int i= 0;
    int count = 0;
    int prva = 0;
    for(i = 0; pojavitve != k+1; i++){
        if(niz[i] == c){
            pojavitve++;
            if(pojavitve==k){
                prva = i+1;
            }
            
        }
    }
    int g = 0;
    char* kopi = (char*)calloc(i-prva, sizeof(char));
    for(int j = prva; j < i-1; j++){
        kopi[g] = niz[j];
        g++;
    }
    return kopi;
}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
