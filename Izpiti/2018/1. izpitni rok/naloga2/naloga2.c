
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

uchar* preberi(char* imeDatoteke, int* sirina, int* visina, int* stBajtov)
{   
    FILE *vhodna = fopen(imeDatoteke, "rb");

    if(vhodna == NULL){
        printf("Napaka pri odpiranju datoteke\n");
        return NULL;
    }

   
    /*char *P6 = calloc(2, sizeof(char));
    fread(P6, sizeof(char), 2, vhodna);
    int max = 255;
    fscanf(vhodna, "%d%d%d\n", sirina, visina, &max);*/
    //*stBajtov = *sirina * *visina * 3;
    //unsigned char *tabela = calloc(*stBajtov*3, sizeof(unsigned char));
    printf("%d %d\n", *sirina, *visina);
    /*for(int i = 0; i < *stBajtov; i++){
        fread(&tabela[i], sizeof(unsigned char), 1, vhodna);
    }*/
    //fclose(vhodna);
    return NULL;
}

int sivina(uchar* pike, int sirina, int visina, int vrstica, int stolpec)
{
    //dopolni

    return 0;
}
#ifndef test
int main() {
   //rocnon testiranje
    return 0;
}
#endif