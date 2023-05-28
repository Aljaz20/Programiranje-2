#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    FILE *rez;
    fp = fopen(argv[1], "rb");
    rez = fopen(argv[2], "wb");
    if(fp == NULL){
        printf("File not found\n");
        exit(0);
    }
    unsigned char R, G, B;
    char *P6= malloc(2*sizeof(char));
    int sirina = 0;
    int visina = 0;
    int temp = 255;
    fread(P6, sizeof(char), 2, fp);
    fscanf(fp, "%d %d\n", &sirina, &visina);
    fscanf(fp, "%d\n", &temp);

    fwrite("P5\n", sizeof(char), 3, rez);
    fprintf(rez, "%d %d\n", sirina, visina);
    fprintf(rez, "%d\n", temp);

    for(int i = 0; i < visina; i++){
        for(int j = 0; j < sirina; j++){
            fscanf(fp, "%c%c%c", &R, &G, &B);
            unsigned char sivina = (30*R + 59*G + 11*B)/100;
            fwrite(&sivina, sizeof(unsigned char), 1, rez);
        }
    }
    fclose(rez);
    fclose(fp);
    return 0;
}
