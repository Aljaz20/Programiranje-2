#include <stdio.h>
#include <stdlib.h>

void izpisi(int n, char c1, char c2, char* tab, int stevec){
    char zacetek = c1;
    if(stevec <= n && stevec!=0){
        for(int i=0; i<stevec; i++){
            printf("%c", tab[i]);
        }
        printf("\n");
    }
    if(stevec > n || c1>c2){
        return;
    }
    while(zacetek <= c2){
        tab[stevec]=zacetek;
        izpisi(n, c1, c2, tab, stevec+1);
        zacetek++;
    }
    return;
    
}


int main(){
    int n;
    char c1, c2;
    scanf("%d %c %c", &n, &c1, &c2);
    char* tab=(char*)malloc(n*sizeof(char));
    izpisi(n, c1, c2, tab, 0);

    return 0;
}