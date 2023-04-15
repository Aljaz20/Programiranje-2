#include <stdio.h>
#include <stdlib.h>

double* pretvori(int* tabela, int n){
    double* kazalci = malloc(n*sizeof(double));
    for(int i = 0; i < n; i++){
        kazalci[i] = (double) tabela[i];
    }
    return kazalci;
}

int main(){
    int n;
    scanf("%d", &n);
    int Tabela[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &Tabela[i]);
    }
    double* kazalci = pretvori(Tabela, n);
    for(int i = 0; i < n; i++){
        printf("%lf\n", kazalci[i]);
    }
    return 0;
}
