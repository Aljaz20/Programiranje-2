#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    fp = fopen(argv[1], "rb");
    if(fp == NULL){
        printf("File not found\n");
        exit(0);
    }
    int vrstica = 0;
    int stolpec = 0;
    for(int i = 0; i < 3; i++){
        if(argv[2][i] == '\0'){
            break;
        }
        vrstica = vrstica * 10 + (argv[2][i] - '0');
    }
    for(int i = 0; i < 3; i++){
        if(argv[3][i] == '\0'){
            break;
        }
        stolpec = stolpec * 10 + (argv[3][i] - '0');
    }
    unsigned char R, G, B;
    char *P6= malloc(2*sizeof(char));
    int sirina = 0;
    int visina = 0;
    int temp = 255;
    fread(P6, sizeof(char), 2, fp);
    fscanf(fp, "%d %d\n", &sirina, &visina);
    fscanf(fp, "%d\n", &temp);

    fseek(fp, 3*sirina*vrstica + 3*stolpec, SEEK_CUR);
    fscanf(fp, "%c%c%c", &R, &G, &B);
    printf("%u %u %u\n", R, G, B);
    fclose(fp);
    return 0;
}