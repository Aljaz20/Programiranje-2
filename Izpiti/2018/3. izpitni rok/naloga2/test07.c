
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
    return v(987, v(177, v(960, v(988, v(46, v(169, v(666, v(126, v(78, v(787, v(33, v(232, v(94, v(352, v(408, v(784, v(958, v(356, v(405, v(505, v(731, v(623, v(27, v(482, v(77, v(680, v(887, v(622, v(889, v(160, v(141, v(698, v(31, v(290, v(477, v(643, v(50, v(296, v(995, v(481, v(152, v(945, v(221, v(970, v(946, v(585, v(577, v(298, v(718, v(743, v(945, v(669, v(238, v(493, v(74, v(223, v(954, v(684, v(457, v(626, v(276, v(112, v(586, v(542, v(428, v(483, v(493, v(973, v(32, v(918, v(126, v(172, v(110, v(398, v(786, v(663, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(62, NULL);
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
