
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
int TAB[31][31];
bool JZ[31][31];

int prestej(int n, int m){
    if(JZ[n][m]){
        return TAB[n][m];
    }
    if(n==0){
        return 1;
    }
    int rez = 0;

    for(int i = m; i <= n; i++){
        for(int j = 1; (j<i) && (j*i <= n); j++){
            int pp = prestej(n-i*j, m);
            rez += pp;
        }
    }

    TAB[n][m] = rez;
    JZ[n][m] = true;

    return rez;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", prestej(n,m));

    return 0;
}
