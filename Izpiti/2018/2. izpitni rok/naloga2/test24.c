
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
    Vozlisce* v018 = malloc(sizeof(Vozlisce));
    Vozlisce* v019 = malloc(sizeof(Vozlisce));
    Vozlisce* v020 = malloc(sizeof(Vozlisce));
    Vozlisce* v021 = malloc(sizeof(Vozlisce));
    Vozlisce* v022 = malloc(sizeof(Vozlisce));
    Vozlisce* v023 = malloc(sizeof(Vozlisce));
    Vozlisce* v024 = malloc(sizeof(Vozlisce));
    Vozlisce* v025 = malloc(sizeof(Vozlisce));
    Vozlisce* v026 = malloc(sizeof(Vozlisce));
    Vozlisce* v027 = malloc(sizeof(Vozlisce));
    v001->podatek = 53;
    v002->podatek = 100;
    v003->podatek = 101;
    v004->podatek = 168;
    v005->podatek = 191;
    v006->podatek = 207;
    v007->podatek = 241;
    v008->podatek = 284;
    v009->podatek = 362;
    v010->podatek = 383;
    v011->podatek = 445;
    v012->podatek = 517;
    v013->podatek = 558;
    v014->podatek = 564;
    v015->podatek = 587;
    v016->podatek = 652;
    v017->podatek = 720;
    v018->podatek = 727;
    v019->podatek = 744;
    v020->podatek = 748;
    v021->podatek = 792;
    v022->podatek = 816;
    v023->podatek = 868;
    v024->podatek = 869;
    v025->podatek = 910;
    v026->podatek = 935;
    v027->podatek = 977;
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
    v017->n = v018;
    v018->n = v019;
    v019->n = v020;
    v020->n = v021;
    v021->n = v022;
    v022->n = v023;
    v023->n = v024;
    v024->n = v025;
    v025->n = v026;
    v026->n = v027;
    v027->n = NULL;
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
    v016->nn = v018;
    v017->nn = v019;
    v018->nn = v020;
    v019->nn = v021;
    v020->nn = v022;
    v021->nn = v023;
    v022->nn = v024;
    v023->nn = v025;
    v024->nn = v026;
    v025->nn = v027;
    v026->nn = NULL;
    v027->nn = NULL;
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

    printf("VSTAVI: 305\n");
    zacetek = vstaviUrejeno(zacetek, 305);

    printf("POTEM:  ");
    izpisi(zacetek);

    pocisti(zacetek);
    exit(0);
    return 0;
}
