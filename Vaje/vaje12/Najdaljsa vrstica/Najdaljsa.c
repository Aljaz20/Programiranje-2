#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int najdaljsa = 0;
    int trenutna = 0;
    char *najvrstica = calloc(1000000, sizeof(char));
    char *trenutnaVrstica = calloc(1000000, sizeof(char));
    char temp;
    FILE *fp;
    FILE *zapisi;
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("Napaka pri odpiranju datoteke\n");
        return 1;
    }
    while(fscanf(fp, "%c", &temp) != EOF){
        trenutnaVrstica[trenutna] = temp;
        trenutna++;
        if(temp == '\n'){
            if(trenutna > najdaljsa){
                najdaljsa = trenutna;
                najvrstica++;
                strcpy(najvrstica, trenutnaVrstica);
            }
            trenutna = 0;
            free(trenutnaVrstica);
            trenutnaVrstica = calloc(1000000, sizeof(char));
        }
    }
    fclose(fp);
    zapisi = fopen(argv[2], "w");

    fprintf(zapisi, "%s\n", najvrstica);
    fclose(zapisi);
    return 0;

}