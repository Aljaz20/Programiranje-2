
/*
Ro"cno testiranje (npr. za primer 01):

gcc naloga1.c
./a.out vhod01.pgm 150 izhod01.pgm
cmp izhod01.pgm ref01.pgm

Samodejno testiranje:

export name=naloga1
make test

Lahko si pomagate tudi s programom hexdump:

hexdump -C datoteka.pgm

Testni primeri:

01: primer iz besedila
02..07: vsaka pika je bodisi 0 bodisi 255
08..12: splo"sni primeri

Testne datoteke:

test*.par: argumenti ukazne vrstice
vhod*.pgm: vhodna slika
ref*.pgm: pri"cakovana izhodna slika
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

int main(int argc, char** argv) {
    FILE *vhod = fopen(argv[1], "rb");
    FILE *izhod = fopen(argv[3], "wb");
    int prag = 0;
    for(int i = 0; i < 3; i++){
        if(argv[2][i] == '\0'){
            break;
        }
        prag = 10*prag + (int)argv[2][i]-'0';
    }
    char *P5 = malloc(2*sizeof(char));
    fread(P5, sizeof(char), 2, vhod);
    int sirina = 0;
    int visina = 0;
    fscanf(vhod, "%d %d\n", &sirina, &visina);
    int max = 255;
    fscanf(vhod, "%d\n", &max);
    unsigned char temp;
    fwrite("P5\n", sizeof(char), 3, izhod);
    fprintf(izhod, "%d %d\n", sirina, visina);
    fprintf(izhod, "%d\n", max);
    for(int i = 0; i< visina; i++){
        for(int j = 0; j < sirina; j++){
            fread(&temp, sizeof(unsigned char), 1, vhod);
            if(temp >= prag){
                temp = 255;
            }else{
                temp = 0;
            }
            fwrite(&temp, sizeof(unsigned char), 1, izhod);
        }
    }
    fclose(vhod);
    fclose(izhod);

    return 0;
}
