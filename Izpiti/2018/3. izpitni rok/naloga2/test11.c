
#include "naloga2.h"

Vozlisce* v(int podatek, Vozlisce* naslednje) {
    Vozlisce* vozlisce = malloc(sizeof(Vozlisce));
    vozlisce->podatek = podatek;
    vozlisce->naslednje = naslednje;
    return vozlisce;
}

void izpisi(Vozlisce* zacetek) {
    Vozlisce* p = zacetek;
    printf("[");
    while (p != NULL) {
        if (p != zacetek) {
            printf(", ");
        }
        printf("%d", p->podatek);
        p = p->naslednje;
    }
    printf("]\n");
}

void pocisti(Vozlisce* zacetek) {
    if (zacetek != NULL) {
        pocisti(zacetek->naslednje);
        free(zacetek);
    }
}

Vozlisce* zgradiOsnovo() {
    return v(629, v(162, v(911, v(570, v(347, v(155, v(898, v(874, v(340, v(881, v(808, v(38, v(754, v(288, v(801, v(418, v(484, v(399, v(602, v(172, v(885, v(433, v(996, v(725, v(269, v(55, v(74, v(391, v(285, v(283, v(63, v(742, v(457, v(884, v(161, v(351, v(465, v(784, v(898, v(256, v(122, v(221, v(542, v(112, v(580, v(937, v(91, v(774, v(774, v(625, v(838, v(41, v(247, v(743, v(866, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(51, NULL);
}

int __main__() {
    Vozlisce* osnova = zgradiOsnovo();
    Vozlisce* indeksi = zgradiIndekse();
    Vozlisce* rezultat = odstrani(osnova, indeksi);

    izpisi(rezultat);

    pocisti(indeksi);
    pocisti(rezultat);

    exit(0);
    return 0;
}
