
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
    return v(877, v(466, v(183, v(433, v(410, v(625, v(230, v(980, v(97, v(98, v(818, v(138, v(435, v(544, v(860, v(663, v(306, v(883, v(650, v(902, v(276, v(899, v(215, v(460, v(36, v(459, v(458, v(517, v(280, v(566, v(787, v(535, v(991, v(718, v(597, v(489, v(938, v(420, v(933, v(757, v(231, v(978, v(531, v(793, v(669, v(265, v(455, v(114, v(776, v(666, v(852, v(607, v(952, v(155, v(869, v(42, v(556, v(577, v(556, v(828, v(261, v(622, v(100, v(708, v(573, v(476, v(322, v(141, v(948, v(859, v(668, v(910, v(896, v(320, v(163, v(998, v(634, v(694, v(793, v(212, v(75, v(766, v(438, v(952, v(129, v(709, v(924, v(181, v(77, v(770, v(929, v(738, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(49, NULL);
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
