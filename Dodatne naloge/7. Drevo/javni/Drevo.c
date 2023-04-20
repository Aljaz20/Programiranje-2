#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int TAB[1000][1000];

int vozlišča(int m){
    if(TAB[m][0] == 0){
        return 1;
    }else{
        int sum = 0;
        for(int i = 1; i <= TAB[m][0]; i++){
            sum += vozlišča(TAB[m][i]-1);
        }
        return sum +1;
    }
}

int najvecje(int m){
    if(TAB[m][0] == 0){
        return m;
    }else{
        int max = m;
        for(int i = 1; i <= TAB[m][0]; i++){
            max = najvecje(TAB[m][i]-1) > max? najvecje(TAB[m][i]-1) : max;
        }
        return max;
    }
}

int visina(int m){
    if(TAB[m][0] == 0){
        return 0;
    }else{
        int max = 0;
        for(int i = 1; i <= TAB[m][0]; i++){
            max = visina(TAB[m][i]-1) +1> max? visina(TAB[m][i]-1)+1 : max;
        }
        return max;
    }
}

int stevilo(int m, int vis){
    if(TAB[m][0] == 0 && vis == 0){
        return 1;
    }else{
        int sum = 0;
        for(int i = 1; i <= TAB[m][0]; i++){
            sum += stevilo(TAB[m][i]-1, vis-1);
        }
        return sum;
    }
}

void izpisi(int m){
    printf("%d", m+1);
    if(TAB[m][0] != 0){
        printf("[");
        for(int i = 1; i <= TAB[m][0]; i++){
            izpisi(TAB[m][i] -1);
            if(i != TAB[m][0]){
                printf(", ");
            }
        }
        printf("]");
    }
}

void izrisi(int m, int zamik, int tab[], int velikost){
    if(zamik == 0){
        printf("%d\n", m+1);
    }else if(zamik == 1){
        printf("+-- %d\n", m+1);
    }else{
        for(int i = 0; i < zamik-1; i++){
            if(tab[velikost- i-1] == 1){
                printf("|   ");
            }else{
                printf("    ");
            }
        }
        printf("+-- %d\n", m+1);
    }
    
    for(int i = 1; i <= TAB[m][0]; i++){
        if(visina(TAB[m][i]-1) != 0 && i != TAB[m][0]){
            tab[visina(TAB[m][i]-1)] = 1;
        }else{
            tab[visina(TAB[m][i]-1)] = 0;
        }
       
        izrisi(TAB[m][i]-1, zamik+1, tab, velikost);
    }
}


void drevo(int u, int m, int n){
    if(u == 1){
        printf("%d\n", vozlišča(m));
        return;
    }else if(u == 2){
        printf("%d\n", najvecje(m)+1);
        return;
    }else if(u == 3){
        printf("%d\n", visina(m));
        return;
    }else if(u == 4){
        int vis = visina(m);
        printf("%d\n", stevilo(m, vis));
        return;
    }else if(u == 5){
        izpisi(m);
        printf("\n");
        return;
    }else{
        int tab[visina(m)];
        izrisi(m,0, tab, visina(m));
        return;
    }
}


int main(){
    int n, k, u,m;
    scanf("%d\n", &n);
    int st;
    for(int i = 0; i < n; i++){
        scanf("%d", &st);
        TAB[i][0] = st;
        for(int j = 1; j <= TAB[i][0]; j++){
            scanf("%d", &st);
            TAB[i][j] = st;
        }
    }
    scanf("%d", &k);
    
    for(int i = 0; i < k; i++){
        scanf("%d%d", &u, &m);
        m--;
        drevo(u, m, n);
    }
    return 0;
}