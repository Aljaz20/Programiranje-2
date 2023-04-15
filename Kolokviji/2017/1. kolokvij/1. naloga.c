#include <stdio.h>
#include <stdlib.h>

int stevilo(unsigned int tab[], int dolzina){
    int count = 0;
    for(int i = 0; i < dolzina; i++){
        while(tab[i] != 0){
            if(tab[i] % 2 == 1){
                count++;
            }
            tab[i] = tab[i] / 2;
        }
    }

    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    unsigned int* tab = malloc(n*sizeof(unsigned int));
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    int skupnostevilo = stevilo(tab, n);
    printf("%d\n", skupnostevilo);

    return 0;
}
