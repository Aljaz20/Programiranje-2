#include <stdio.h>
#include <stdlib.h>

int tab[1001][1001][11];

int najvecja(int V, int n, int* prostornine, int* cene, int k){
    int d = k;
    if(tab[V][n][k] != -1){
        return tab[V][n][k];
    }
    if(V == 0 || n == 0){
        return 0;
    }if((prostornine[n-1] % 2 == 1 && k==0) || (prostornine[n-1] > V)){
        return najvecja(V, n-1, prostornine, cene, k);
    }
    if(prostornine[n-1] % 2 == 1){
        d--;
    }
    int prva = najvecja(V, n-1, prostornine, cene, k);
    int druga = najvecja(V-prostornine[n-1], n-1, prostornine, cene, d) + cene[n-1];
    if(prva > druga) {
        tab[V][n][k] = prva;
        return tab[V][n][k];
    }
    tab[V][n][k] = druga;
    return tab[V][n][k];

}

int main(){
    int V, n, k;
    scanf("%d%d%d", &V, &n, &k);
    int* prostornine = (int*)calloc(n, sizeof(int));
    int* cene = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &prostornine[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &cene[i]);
    }
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j < 1001; j++){
            for(int l = 0; l < 11; l++){
                tab[i][j][l] = -1;
            }
        }
    }
    printf("%d\n", najvecja(V, n, prostornine, cene, k));
    free(prostornine);
    free(cene);
    return 0;
}