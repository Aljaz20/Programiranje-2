
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...



int prestej(short n, short m, short* tab, short zacetna, short indeks){
    if(n == 1){
        return 1;
    }
   

    int nacini = 0;
    for(short i = m-1; i > 1; i--){
        for(short j = 1; (i+j<=m) && (i > j) &&((i+j) <=n); j++){
            if(n%(i+j) != 0){
                continue;
            }
            short preveri = 0;
            for(short k = 0; k < indeks; k++){
                if(tab[k] == i || tab[k] == j){
                    preveri = 1;
                    break;
                }
            }
            if(preveri == 1){
                continue;
            }
            if(n==zacetna){
                free(tab);
                tab=(short*)calloc(n+1, sizeof(short));
                indeks = 0;
            }
           
            tab[indeks] = i;
            tab[indeks+1] = j;
            indeks += 2;
            nacini += prestej(n/(i+j), m, tab, zacetna, indeks);
            tab[indeks] = 0;
            tab[indeks+1] = 0;
            indeks -= 2;
            //printf("i=%d  j=%d\n", i,j);
        }
    }
    return nacini;
}

int main() {
    short n, m;
    scanf("%hd%hd", &n, &m);
    short* tab=(short*)calloc(n+1, sizeof(short));

    printf("%d\n", prestej(n,m, tab, n, 0));

    return 0;
}
