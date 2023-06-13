
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void poti (int n, int zacetek, int konec, int** tabela, int* prehojeno, int trenutno, int stevilka){
    if(trenutno == konec){
        for(int i = 0; i < stevilka; i++){
            printf("%d", prehojeno[i]);
        }
        printf("%d\n", konec);
        return;
    }

    for(int i = 0; i < n; i++){
        if(tabela[trenutno][i] == 0){
            continue;
        }
        int preveri = 0;
        for(int j = 0; j <= stevilka; j++){
            if(prehojeno[j] == i){
                preveri = 1;
                break;
            }
        }
        if(preveri == 1){
            continue;
        }
        prehojeno[stevilka+1] = i;
        poti(n,zacetek,konec,tabela,prehojeno,i,stevilka+1);
    }
}


int main() 
{
    int n, zacetek, konec;
    scanf("%d\n", &n);
    int** tabela = calloc(n, sizeof(int*));
    for(int i = 0; i <n; i++){
        tabela[i] = calloc(n, sizeof(int));
        for(int j = 0; j < n; j++){
            scanf("%d", &tabela[i][j]);
        }
    }
    scanf("%d %d\n", &zacetek, &konec);
    int* prehojeno = calloc(n, sizeof(int));
    prehojeno[0] = zacetek;
    poti(n,zacetek,konec, tabela, prehojeno, zacetek, 0);

    return 0;
}


