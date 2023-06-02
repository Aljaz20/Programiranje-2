#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int k= 0;
    FILE *vhod;
    vhod = fopen(argv[1], "rb");
    for(int i = 0; i < 7; i++){
        if(argv[2][i] == '\0'){
            break;
        }
        k = k * 10 + (argv[2][i] - '0');
    }
    unsigned char *tabela = calloc((k+1) ,sizeof(unsigned char));
    int i = 0;
    int dolzina = fread(tabela, sizeof(unsigned char), k, vhod);
    while(dolzina != 0 ){
        FILE *izhod;
        char ime[20];
        sprintf(ime, "%s.%d", argv[1], i);
        izhod = fopen(ime, "wb");
        fwrite(tabela, sizeof(unsigned char), dolzina, izhod);
        fclose(izhod);
        i++;
        dolzina = fread(tabela, sizeof(unsigned char), k, vhod);
    }
    fclose(vhod);
    free(tabela);
    return 0;

}