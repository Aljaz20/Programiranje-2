
/*
Ro"cno testiranje (npr. za primer test01.in):

gcc naloga3.c
./a.out < test01.in

Samodejno testiranje:

export name=naloga3
make test

Testni primeri:

test01: primer iz besedila
test02..test08: "se nekaj dodatnih testov

.in: testni vhod
.outA: pri"cakovani izhod (poljubna permutacija vrstic je tudi v redu)
.outB: pri"cakovani izhod za 0.6 to"cke (poljubna permutacija vrstic je tudi v redu)
.outC: pri"cakovani izhod za 0.3 to"cke (poljubna permutacija vrstic je tudi v redu)
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

void izpisi(char* S, int n, int d, char* temp, int mala, int velika, int stevka, int dolzina) {
    if(dolzina == n){
        if (mala > 0 && velika > 0 && stevka > 0) {
            for (int l = 0; l < n; l++) {
                printf("%c", temp[l]);
            }
            printf("\n");
        }
        return;
    }
    
    for(int i = 0; i < d; i++){
        if (S[i] >= 'a' && S[i] <= 'z') {
            temp[dolzina] = S[i];
            izpisi(S, n, d, temp, mala + 1, velika, stevka, dolzina + 1);
        }
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            temp[dolzina] = S[i];
            izpisi(S, n, d, temp, mala, velika + 1, stevka, dolzina + 1);
        }
        else if (S[i] >= '0' && S[i] <= '9') {
            temp[dolzina] = S[i];
            izpisi(S, n, d, temp, mala, velika, stevka + 1, dolzina+1);
        }else{
            temp[dolzina] = S[i];
            izpisi(S, n, d, temp, mala, velika, stevka, dolzina + 1);
        }
    }
}

int main() {
    int d, n;
    scanf("%d ", &d);
    char* S = malloc(d * sizeof(char));
    for(int i = 0; i < d; i++){
        scanf("%c", &S[i]);
    }
    scanf("%d", &n);

    char* temp = malloc(n * sizeof(char));
    izpisi(S, n, d, temp, 0, 0, 0, 0);

    return 0;
}
