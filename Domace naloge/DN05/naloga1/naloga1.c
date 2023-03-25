
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga1.c
./test01

*/

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int* poisci(int* t, int* dolzina, int** konec) {
    int *zacetek;
    while(*t != 0){
        t--;
    }
    t++;
    zacetek = t;
    int dol = 0;
    while(*t != 0){
        t++;
        dol++;
    }
    t--;
    *dolzina = dol;
    *konec = t;
    return zacetek;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
