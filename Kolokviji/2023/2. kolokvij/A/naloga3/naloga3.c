
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Testni primeri:
 * 02--06: y = 0, koordinate x nara"s"cajo
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

//int razdalja(int k, )

void poti(int n, int k, int** tabela, int*temp, int trenutni, int indeks){
    if(n == trenutni+1){
        int i = 0;
        for(i = 0; i<indeks-1; i++){
            printf("%d->", temp[i]);
        }
        printf("%d\n", temp[indeks-1]);
        return;
    }

    for(int i = 1; i < n ; i++){
        if(trenutni == i){
            continue;
        }
        int razdalja = (tabela[trenutni][0] - tabela[i][0]) * (tabela[trenutni][0] - tabela[i][0]) + (tabela[trenutni][1] - tabela[i][1])*(tabela[trenutni][1] - tabela[i][1]);
        if (razdalja > k*k){
            continue;
        }
        razdalja = (tabela[trenutni][0] - tabela[n-1][0]) * (tabela[trenutni][0] - tabela[n-1][0]) + (tabela[trenutni][1] - tabela[n-1][1])*(tabela[trenutni][1] - tabela[n-1][1]);
        int razdalja2 = (tabela[i][0] - tabela[n-1][0]) * (tabela[i][0] - tabela[n-1][0]) + (tabela[i][1] - tabela[n-1][1])*(tabela[i][1] - tabela[n-1][1]);
        
        if(razdalja2 >= razdalja){
            continue;
        }
        temp[indeks] = i;
        poti(n,k,tabela,temp,i,indeks+1);
    }
    return;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int** tabela = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++){
        tabela[i] = calloc(2, sizeof(int));
        scanf("%d %d", &tabela[i][0], &tabela[i][1]);
    }
    int* temp = calloc(n, sizeof(int));
    temp[0] = 0;
    
    poti(n,k, tabela, temp, 0,1);


    return 0;
}
