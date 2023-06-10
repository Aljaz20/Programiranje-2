
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
    Vozlisce* v028 = malloc(sizeof(Vozlisce));
    Vozlisce* v029 = malloc(sizeof(Vozlisce));
    Vozlisce* v030 = malloc(sizeof(Vozlisce));
    Vozlisce* v031 = malloc(sizeof(Vozlisce));
    Vozlisce* v032 = malloc(sizeof(Vozlisce));
    Vozlisce* v033 = malloc(sizeof(Vozlisce));
    Vozlisce* v034 = malloc(sizeof(Vozlisce));
    Vozlisce* v035 = malloc(sizeof(Vozlisce));
    Vozlisce* v036 = malloc(sizeof(Vozlisce));
    Vozlisce* v037 = malloc(sizeof(Vozlisce));
    Vozlisce* v038 = malloc(sizeof(Vozlisce));
    Vozlisce* v039 = malloc(sizeof(Vozlisce));
    Vozlisce* v040 = malloc(sizeof(Vozlisce));
    Vozlisce* v041 = malloc(sizeof(Vozlisce));
    Vozlisce* v042 = malloc(sizeof(Vozlisce));
    Vozlisce* v043 = malloc(sizeof(Vozlisce));
    Vozlisce* v044 = malloc(sizeof(Vozlisce));
    Vozlisce* v045 = malloc(sizeof(Vozlisce));
    Vozlisce* v046 = malloc(sizeof(Vozlisce));
    Vozlisce* v047 = malloc(sizeof(Vozlisce));
    Vozlisce* v048 = malloc(sizeof(Vozlisce));
    Vozlisce* v049 = malloc(sizeof(Vozlisce));
    Vozlisce* v050 = malloc(sizeof(Vozlisce));
    Vozlisce* v051 = malloc(sizeof(Vozlisce));
    v001->podatek = 24;
    v002->podatek = 29;
    v003->podatek = 41;
    v004->podatek = 173;
    v005->podatek = 176;
    v006->podatek = 198;
    v007->podatek = 213;
    v008->podatek = 245;
    v009->podatek = 246;
    v010->podatek = 266;
    v011->podatek = 292;
    v012->podatek = 335;
    v013->podatek = 352;
    v014->podatek = 353;
    v015->podatek = 359;
    v016->podatek = 400;
    v017->podatek = 425;
    v018->podatek = 430;
    v019->podatek = 431;
    v020->podatek = 481;
    v021->podatek = 490;
    v022->podatek = 497;
    v023->podatek = 510;
    v024->podatek = 529;
    v025->podatek = 534;
    v026->podatek = 552;
    v027->podatek = 554;
    v028->podatek = 576;
    v029->podatek = 594;
    v030->podatek = 602;
    v031->podatek = 610;
    v032->podatek = 630;
    v033->podatek = 679;
    v034->podatek = 715;
    v035->podatek = 719;
    v036->podatek = 723;
    v037->podatek = 729;
    v038->podatek = 773;
    v039->podatek = 778;
    v040->podatek = 818;
    v041->podatek = 831;
    v042->podatek = 837;
    v043->podatek = 838;
    v044->podatek = 857;
    v045->podatek = 872;
    v046->podatek = 874;
    v047->podatek = 887;
    v048->podatek = 913;
    v049->podatek = 929;
    v050->podatek = 942;
    v051->podatek = 971;
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
    v027->n = v028;
    v028->n = v029;
    v029->n = v030;
    v030->n = v031;
    v031->n = v032;
    v032->n = v033;
    v033->n = v034;
    v034->n = v035;
    v035->n = v036;
    v036->n = v037;
    v037->n = v038;
    v038->n = v039;
    v039->n = v040;
    v040->n = v041;
    v041->n = v042;
    v042->n = v043;
    v043->n = v044;
    v044->n = v045;
    v045->n = v046;
    v046->n = v047;
    v047->n = v048;
    v048->n = v049;
    v049->n = v050;
    v050->n = v051;
    v051->n = NULL;
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
    v026->nn = v028;
    v027->nn = v029;
    v028->nn = v030;
    v029->nn = v031;
    v030->nn = v032;
    v031->nn = v033;
    v032->nn = v034;
    v033->nn = v035;
    v034->nn = v036;
    v035->nn = v037;
    v036->nn = v038;
    v037->nn = v039;
    v038->nn = v040;
    v039->nn = v041;
    v040->nn = v042;
    v041->nn = v043;
    v042->nn = v044;
    v043->nn = v045;
    v044->nn = v046;
    v045->nn = v047;
    v046->nn = v048;
    v047->nn = v049;
    v048->nn = v050;
    v049->nn = v051;
    v050->nn = NULL;
    v051->nn = NULL;
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

    printf("VSTAVI: 15\n");
    zacetek = vstaviUrejeno(zacetek, 15);

    printf("POTEM:  ");
    izpisi(zacetek);

    pocisti(zacetek);
    exit(0);
    return 0;
}
