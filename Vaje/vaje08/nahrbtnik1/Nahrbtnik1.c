#include <stdio.h>
#include <stdlib.h>

int tab[1001][1001];

int najvecja(int V, int n, int* prostornine, int* cene){
    if(tab[V][n] != -1){
        return tab[V][n];
    }
    if(V == 0 || n == 0){
        return 0;
    }if(prostornine[n-1] > V){
        return najvecja(V, n-1, prostornine, cene);
    }
    if(najvecja(V, n-1, prostornine, cene) > najvecja(V-prostornine[n-1], n-1, prostornine, cene) + cene[n-1]){
        tab[V][n] = najvecja(V, n-1, prostornine, cene);
        return tab[V][n];
    }
    tab[V][n] = najvecja(V-prostornine[n-1], n-1, prostornine, cene) + cene[n-1];
    return tab[V][n];

}

int main(){
    int V, n;
    scanf("%d%d", &V, &n);
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
            tab[i][j] = -1;
        }
    }
    printf("%d\n", najvecja(V, n, prostornine, cene));
    free(prostornine);
    free(cene);
    return 0;
}