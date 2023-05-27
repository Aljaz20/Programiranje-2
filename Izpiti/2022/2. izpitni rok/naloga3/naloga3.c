
/*
Ro"cno testiranje (npr. za primer test01.in):

gcc naloga3.c
./a.out < test01.in

Samodejno testiranje:

export name=naloga3
make test

Testni primeri:

test01: primer iz besedila
test01..test05: primeri z n <= 12
test06..test15: primeri z n > 12

.in: testni vhod
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

int barva(long sirina, long x, long y){
    if(y>x){
        return 0;
    }
    if(x==0 && y==0){
        return 1;
    }
    sirina = sirina /2;
    if( x >= sirina){
        x = x - sirina;
    }
    if(y >= sirina){
        y = y - sirina;
    }
    return barva(sirina, x, y);
    

}

int main() {
    long n,v,s,h,w;
    scanf("%ld%ld%ld%ld%ld", &n, &v, &s, &h, &w);
    long dolzina = 1;
    for(int i = 0; i < n; i++){
        dolzina *= 3;
    }
    long sirina = 1;
    for(int i = n; i >0 ; i--){
        sirina *= 2;
    }
    printf("%ld\n", dolzina);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(barva(sirina, s+j, v+i) == 0){
                printf("-");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
