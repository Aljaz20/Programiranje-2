#include <stdio.h>
#include <stdlib.h>

char TABELA[100][43];


int nizi(int dolzina, char tab[], int vrstica){
    for(int i = 0; TABELA[vrstica][i] != '\0'; i++){
        tab[vrstica] = TABELA[vrstica][i];
        if(vrstica == dolzina-1){
            printf("%s\n", tab);
        }else{
            nizi(dolzina, tab, vrstica+1);
        }
    }
    return 0;
}


int main(){
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        char temp;
        scanf("%c", &temp);
        for(int j=0; temp != '\n'; j++){
            TABELA[i][j] = temp;
            scanf("%c", &temp);
        }
    }
    char *t = calloc(n,sizeof(char));
    nizi(n, t, 0);
    return 0;
}