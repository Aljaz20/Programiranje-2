
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Testni primeri:
 * 02--06: graf je acikli"cen
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

void izpisi (int n, int m, int k, int** tabela, int* podvoji, int trenutni, int count){
    if(trenutni == n-1){
        for(int i = 0; i < count-1; i++){
            printf("%d->", podvoji[i]);
        }
        printf("%d\n", podvoji[count-1]);
        return;
    }
    
    
    for(int  i = 0; i < m; i++) {
        if(trenutni != tabela[i][0]){
            continue;
        }
        int temp = k - tabela[i][2];
        if(temp < 0){
            continue;
        }
        int tt = 0;
        for(int j = 0; j < count; j++){
            if(podvoji[j] == tabela[i][1]){
                tt =1;
                break;
            }
        }
        if(tt == 1){
            continue;
        }
        podvoji[count] = tabela[i][1];
        izpisi(n,m,temp, tabela, podvoji, tabela[i][1], count + 1);


    }
}

int main() {
    int n,m,k;
    scanf("%d %d\n %d", &n, &m, &k);

    int** tabela = calloc(m, sizeof(int*));
    for(int i = 0; i < m; i++){
        tabela[i] = calloc(3, sizeof(int));
        scanf("%d %d %d", &tabela[i][0], &tabela[i][1], &tabela[i][2]);
    }

    int* podvoji = calloc(n, sizeof(int));
    podvoji[0] = 0;


    izpisi(n,m,k,tabela, podvoji, 0, 1);

    return 0;
}
