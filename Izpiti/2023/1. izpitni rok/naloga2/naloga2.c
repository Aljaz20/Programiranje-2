
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Testni primeri:
 * 02--06: a = 1, b = n
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

void izpiši(int n, int a, int b, int* tabela, int trenutni, int sum, int prejsni){
    if(sum == n){
        if(trenutni>=a && trenutni<=b){
            for(int i = 0; i < trenutni-1; i++){
                printf("%d+", tabela[i]);
            }
            printf("%d\n", tabela[trenutni-1]);
        }
        return;
    }
    for(int i = prejsni; i <= n-sum; i++){
        tabela[trenutni] = i;
        izpiši(n,a,b,tabela,trenutni+1,sum+i,i);
        
    }
}

int main() {
    int n,a,b;
    scanf("%d %d %d", &n, &a, &b);
    int *tabela = calloc(50,sizeof(int));
    izpiši(n,a,b, tabela, 0,0,1);

    return 0;
}
