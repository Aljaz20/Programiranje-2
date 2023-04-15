#include <stdio.h>
#include <stdlib.h>

long double** pretvori(int n, int m){
    long double** a = malloc(n * sizeof(long double*));
    for(int i = 0; i < n; i++){
        a[i] = malloc(m * sizeof(long double));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            a[i][j] = (long double)rand() / (long double)RAND_MAX;
        }
        for(int j = i+1; j < m; j++){
            a[i][j] = (long double) 0;
        }
    }
    return a;
}

int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    long double** a = pretvori(n,m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%Lf ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
