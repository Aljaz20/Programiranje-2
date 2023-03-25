
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga2.c
./test01

*/

#include <stdio.h>
#include "naloga2.h"

void zamenjaj(int** a, int** b) {
    int *vrednosta = *a;
    int *vrednostb = *b;
    *a = vrednostb;
    *b = vrednosta;
}

void uredi(int** a, int** b, int** c) {
    if(**b < **a){
        zamenjaj(a,b);
        if(**c < **b){
            zamenjaj(c,b);
            if(**b < **a){
                zamenjaj(b,a);
            }
        }
    }else if(**c < **b){
        zamenjaj(c,b);
        if(**c < **a){
            zamenjaj(b,a);
        }
    }
}

int main() {

    return 0;
}
