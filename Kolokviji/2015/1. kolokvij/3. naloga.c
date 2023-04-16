#include <stdio.h>
#include <stdbool.h>

int tabela[8] = {1,2,5,10,20,50,100,200};
long tab[100000][8];
int ZV[100000][8];

long prestej(int znesek, int stevilo){
	if(ZV[znesek][stevilo]){
		return tab[znesek][stevilo];
	}
    if(znesek == 0){
        return 1;
    }
    if(znesek < 0){
        return 0;
    }
    if(stevilo == 8){
        return 0;
    }
    tab[znesek][stevilo]=  prestej(znesek - tabela[stevilo], stevilo) + prestej(znesek, stevilo + 1);
    ZV[znesek][stevilo] = true;
    return tab[znesek][stevilo];
}

int main(){
    int znesek;
    double cena;
    scanf("%lf", &cena);
    znesek = (int) (cena * 100);
    printf("%ld\n", prestej(znesek, 0));
    return 0;
}
