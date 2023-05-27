#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *vhod;
    vhod = fopen(argv[1], "r");
    int n = 0;
    for(int i = 0; i < 7; i++){
        if(argv[2][i] == '\0'){
            break;
        }
        n = n*10 + argv[2][i] - '0';
    }
    int vrstice = 0;
    char *vrstica = calloc(11, sizeof(char));
    while(fgets(vrstica, 11, vhod) != NULL){
        vrstice++;
    }
    if(n > vrstice){
        n = 0;
    }else{
        n = vrstice - n;
    }
    fclose(vhod);
    vhod = fopen(argv[1], "r");
    for(int i = 0; i < n; i++){
        fgets(vrstica, 11, vhod);
    }
    while(fgets(vrstica, 11, vhod) != NULL){
        printf("%s", vrstica);
    }
    fclose(vhod);
    return 0;
}