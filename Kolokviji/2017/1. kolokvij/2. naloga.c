#include <stdio.h>
#include <stdlib.h>

int** tabela(int n){
    int** tab = (int**)malloc((n+1)*sizeof(int*));
    for(int i = 0; i < n; i++){
        tab[i] = (int*)malloc((n-1)*sizeof(int));
        tab[i][-1] = i;
        for(int j = 0; j < i; j++){
            tab[i][j] = j;
        }
    }
    tab[n] = NULL;

    return tab;
}

int main(){
    int n;
    scanf("%d", &n);
    int** a = tabela(n);
    int i = rand() %n;
    int j = rand() %n;
    while(j >= i){
        j = rand() %n;
    }
    printf("a[%d] = %ls   a[%d][-1] = %d   a[%d][%d] = %d\n", n, a[n], i, a[i][-1], i, j, a[i][j]);
    return 0;
}