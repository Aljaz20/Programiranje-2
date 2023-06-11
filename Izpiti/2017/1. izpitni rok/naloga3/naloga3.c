#include <stdio.h>
#include <stdlib.h>


void izpisi(int n, int** tabela, int trenutni, int* temp){
    if(trenutni == n){
        for(int i = 0; i < n; i++){
            printf("%d", temp[i]);
        }
        printf("\n");
        return;
    }
    for(int i = tabela[trenutni][0]; i <= tabela[trenutni][1]; i++){
        temp[trenutni] = i;
        izpisi(n, tabela, trenutni+1, temp);
    }
}

int main() 
{
    int n;
    scanf("%d\n", &n);
    int** tabela = calloc(n, sizeof(int*));
    int* temp = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        tabela[i] = calloc(2, sizeof(int));
        for(int j = 0; j < 2; j++){
            scanf("%d", &tabela[i][j]);
        }
    }
    izpisi(n, tabela, 0, temp);
    return 0;
}
