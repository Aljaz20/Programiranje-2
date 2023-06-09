
#include "naloga2.h"

void izpisi(Vozlisce* zacetek) {
    Vozlisce* p = zacetek;
    while (p != NULL) {
        if (p != zacetek) {
            printf(" -> ");
        }
        printf("%d", p->podatek);
        p = p->n;
    }
    printf(" | ");

    Vozlisce* pp = zacetek;
    while (pp != NULL) {
        if (pp != zacetek) {
            printf(" ->-> ");
        }
        printf("%d", pp->podatek);
        pp = pp->nn;
    }
    printf(" | ");
    if (zacetek != NULL) {
        Vozlisce* pp = zacetek->n;
        while (pp != NULL) {
            if (pp != zacetek->n) {
                printf(" ->-> ");
            }
            printf("%d", pp->podatek);
            pp = pp->nn;
        }
    }
    printf("\n");
}

Vozlisce* zgradiSeznam() {
    Vozlisce* v001 = malloc(sizeof(Vozlisce));
    Vozlisce* v002 = malloc(sizeof(Vozlisce));
    Vozlisce* v003 = malloc(sizeof(Vozlisce));
    Vozlisce* v004 = malloc(sizeof(Vozlisce));
    Vozlisce* v005 = malloc(sizeof(Vozlisce));
    Vozlisce* v006 = malloc(sizeof(Vozlisce));
    Vozlisce* v007 = malloc(sizeof(Vozlisce));
    Vozlisce* v008 = malloc(sizeof(Vozlisce));
    Vozlisce* v009 = malloc(sizeof(Vozlisce));
    Vozlisce* v010 = malloc(sizeof(Vozlisce));
    Vozlisce* v011 = malloc(sizeof(Vozlisce));
    Vozlisce* v012 = malloc(sizeof(Vozlisce));
    Vozlisce* v013 = malloc(sizeof(Vozlisce));
    Vozlisce* v014 = malloc(sizeof(Vozlisce));
    Vozlisce* v015 = malloc(sizeof(Vozlisce));
    Vozlisce* v016 = malloc(sizeof(Vozlisce));
    Vozlisce* v017 = malloc(sizeof(Vozlisce));
    v001->podatek = 19;
    v002->podatek = 76;
    v003->podatek = 83;
    v004->podatek = 102;
    v005->podatek = 124;
    v006->podatek = 283;
    v007->podatek = 326;
    v008->podatek = 349;
    v009->podatek = 391;
    v010->podatek = 410;
    v011->podatek = 567;
    v012->podatek = 609;
    v013->podatek = 703;
    v014->podatek = 772;
    v015->podatek = 825;
    v016->podatek = 969;
    v017->podatek = 974;
    v001->n = v002;
    v002->n = v003;
    v003->n = v004;
    v004->n = v005;
    v005->n = v006;
    v006->n = v007;
    v007->n = v008;
    v008->n = v009;
    v009->n = v010;
    v010->n = v011;
    v011->n = v012;
    v012->n = v013;
    v013->n = v014;
    v014->n = v015;
    v015->n = v016;
    v016->n = v017;
    v017->n = NULL;
    v001->nn = v003;
    v002->nn = v004;
    v003->nn = v005;
    v004->nn = v006;
    v005->nn = v007;
    v006->nn = v008;
    v007->nn = v009;
    v008->nn = v010;
    v009->nn = v011;
    v010->nn = v012;
    v011->nn = v013;
    v012->nn = v014;
    v013->nn = v015;
    v014->nn = v016;
    v015->nn = v017;
    v016->nn = NULL;
    v017->nn = NULL;
    return v001;
}

void pocisti(Vozlisce* zacetek) {
    if (zacetek != NULL) {
        pocisti(zacetek->n);
        free(zacetek);
    }
}

int __main__() {
    Vozlisce* zacetek = zgradiSeznam();

    printf("PREJ:   ");
    izpisi(zacetek);

    printf("VSTAVI: 189\n");
    zacetek = vstaviUrejeno(zacetek, 189);

    printf("POTEM:  ");
    izpisi(zacetek);

    pocisti(zacetek);
    exit(0);
    return 0;
}
