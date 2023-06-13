
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

/*
 * TESTNI PRIMERI:
 *
 * J1 (S1--S5): 
 *    kazalci d, e, f in g so NULL;
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J2 (S6--S10): 
 *    kazalca f in g sta NULL;
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J3 (S11--S15): 
 *    kazalca f in g sta NULL;
 *    ve"c kazalcev lahko ka"ze na isti element iste tabele,
 *    ne morejo pa kazati na razli"cne elemente iste tabele
 *
 * J4 (S16--S20):
 *    vsak veljaven kazalec ka"ze v svojo tabelo
 *
 * J5--J6 (S21--S30):
 *    ve"c kazalcev lahko ka"ze na isti element iste tabele,
 *    ne morejo pa kazati na razli"cne elemente iste tabele
 *
 * J7--J10 (S31--S50):
 *    brez omejitev
 */

int steviloPozitivnih(T* t) {
    int count = 0;
    for(int i = 0; i < 42 && t->b[i] != 0; i++){
        if(t->b[i] > 0){
            count++;
            t->b[i] = -1;
        }
    }
    for(int i = 0; t->c != NULL && (t->c)[i] != '\0'; i++){
        if((t->c)[i] > 0){
            count++;
            (t->c)[i] = -1;
        }
    }
    for(int i = 0; t->d != NULL && (t->d)[i] != NULL; i++){
        for(int j = 0; (t->d)[i][j] != '\0'; j++){
            if((t->d)[i][j] > 0){
                count++;
                (t->d)[i][j] = -1;
            }
        }
    }
    for(int i = 0; t->e != NULL && (t->e)[i] != NULL; i++){
        for(int j = 0; (t->e)[i][j] != '\0'; j++){
            if((t->e)[i][j] > 0){
                count++;
                (t->e)[i][j] = -1;
            }
        }
    }
    for(int i = 0; t->f != NULL && (t->f)->a != 0; i++){
        if((t->f)->a > 0){
            count++;
            (t->f)->a = -1;
        }
        t->f++;
    }
    for(int i = 0; t->g != NULL && (t->g)[i] != NULL; i++){
        for(int j = 0; (t->g)[i] !=  NULL && (t->g)[i][j].a != 0; j++){
            if((t->g)[i][j].a > 0){
                count++;
                (t->g)[i][j].a= -1;
            }
        }
    }
    
    return count;
}

int main() {
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
