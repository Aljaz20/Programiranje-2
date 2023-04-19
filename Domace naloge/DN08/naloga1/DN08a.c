#include <stdio.h>
#include <stdlib.h>

int* zamenjaj(int indeks1, int indeks2, int dolzina, int* tab, int n){
    int* temp = (int*) calloc(dolzina, sizeof(int));
    int* nov = (int*)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        nov[i] = tab[i];
    }
    for(int i = 0; i < dolzina; i++){
        temp[i] = tab[indeks1+i];
        nov[indeks1+i] = nov[indeks2+i];
        nov[indeks2+i] = temp[i];
    }
    free(temp);
    return nov;
}

int jeurejeno(int* tab,int n){
    int prejsno = tab[0];
    for(int i = 1; i < n; i++){
        if(tab[i] <= prejsno){
            return 0;
        }
        prejsno = tab[i];
    }
    return 1;
}

int zamenjave(int n, int k, int r, int* tab){   
    int zam= 0;
    if(jeurejeno(tab, n) == 1){
        zam++;
    }
    if(k == 0){
        return zam;
    }
    
    for(int i = 0; i <= n-2*r; i++){
        for(int j = i + r; j <= n-r; j++){
            zam += zamenjave(n, k-1, r, zamenjaj(i ,j , r, tab, n));
        }
        
    }
    return zam;

}

int main(){
    int n, k, r;
    scanf("%d%d%d", &n, &k, &r);
    int* tab = (int*)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }

    printf("%d\n", zamenjave(n, k, r, tab));
    return 0;
}