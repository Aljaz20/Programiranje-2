#include <stdio.h>
#include <stdlib.h>

void razbitja(int n, int m, int* tab, int* tab2, int vsota, int stevec){
    if(vsota==0){
        printf("{");
        for(int i=0; i<stevec-1; i++){
            printf("%d, ", tab2[i]);
        }
        printf("%d}\n", tab2[stevec-1]);
        return;
    }
    if(vsota<0 || n==1){
        return;
    }
    tab2[stevec]=tab[m-(n-1)];
    razbitja(n-1, m, tab, tab2, vsota-tab[m-(n-1)], stevec+1);
    razbitja(n-1, m, tab, tab2, vsota, stevec);
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    int* tab=(int*)malloc(n*sizeof(int));
    int vsota=0;
    for(int i=0; i<n; i++){
        scanf("%d", &tab[i]);
        vsota+=tab[i];
    }
    int* tab2=(int*)malloc(n*sizeof(int));
    tab2[0]=tab[0];
    razbitja(n, n, tab, tab2, vsota/2 - tab2[0], 1);
    return 0;
}