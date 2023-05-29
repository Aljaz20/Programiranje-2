#ifndef _NALOGA2_H
#define _NALOGA2_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char uchar;

uchar* preberi(char* imeDatoteke, int* sirina, int* visina, int* stBajtov);
int sivina(uchar* pike, int sirina, int visina, int vrstica, int stolpec);

#endif
