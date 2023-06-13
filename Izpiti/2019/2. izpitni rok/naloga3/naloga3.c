
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Cell Cell;
struct Cell
{
    char *tabela;
};

Cell readCell()
{
    char* x = (char*) malloc(4 * sizeof(char));
    scanf("%s", x);
    Cell *c = calloc(1, sizeof(Cell));
    c->tabela = x;
    return *c;
}


void solve(Cell** tab, int h, int w, char* path, int x, int y, int prejsna, int dolzina)
{
   
    if(x == h && y == w){
        for(int i = 0; i < dolzina; i++){
            printf("%c", path[i]);
        }
        exit(0);
    }
    if(tab[x][y].tabela[0] == '0' && 0 != prejsna){
        path[dolzina] = '0';
        solve(tab,h,w,path,x,y-1,2,dolzina+1);
    }
    if(tab[x][y].tabela[1] == '0' && 1 != prejsna){
        path[dolzina] = '1';
        solve(tab,h,w,path,x-1,y,3,dolzina+1);
    }
    if(tab[x][y].tabela[2] == '0' && 2 != prejsna){
        path[dolzina] = '2';
        
        solve(tab,h,w,path,x,y+1,0,dolzina+1);
    }
    if(tab[x][y].tabela[3] == '0' && 3 != prejsna){
        path[dolzina] = '3';
        solve(tab,h,w,path,x+1,y,1,dolzina+1);
    }
    
    
    
}

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    Cell** tab = (Cell**) malloc(m * sizeof(Cell*));
        
    for (int i = 0; i < m; ++i){
        tab[i] = (Cell*) malloc(n * sizeof(Cell));
        for (int j = 0; j < n; ++j){
            tab[i][j] = readCell();
        }
            
    }
        
    char* path = calloc(m*n, sizeof(char));
    solve(tab, m-1, n-1, path,  0,0, 0, 0);
    return 0;
}
