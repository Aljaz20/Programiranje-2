#include <stdio.h>
#include <stdlib.h>

int izpisi(char * vhod, int n){
    if(n == 1){
        printf("%s\n", vhod);
        printf("\n");
        return 0;
    }
    printf("%s\n", vhod);
    char* novo = (char*)calloc((n-1),sizeof(char));
    for(int i = 0; i < n-1; i++){
        novo[i] = vhod[i];
    }
    free(vhod);
    return izpisi(novo, n-1);
}

int main(){
    int n;
    char* vhod = (char*)calloc(n,sizeof(char));
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%c", &vhod[i]);
    }
    izpisi(vhod, n);
    
    return 0;
}