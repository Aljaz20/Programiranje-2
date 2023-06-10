
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
    return v(215, v(818, v(998, v(565, v(401, v(840, v(327, v(186, v(799, v(440, v(109, v(313, v(302, v(756, v(778, v(555, v(55, v(778, v(914, v(959, v(263, v(120, v(205, v(233, v(463, v(178, v(446, v(167, v(307, v(985, v(786, v(406, v(236, v(56, v(453, v(492, v(860, v(857, v(757, v(514, v(544, NULL)))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(1, v(2, v(3, v(6, v(9, v(16, v(21, v(23, v(27, v(29, v(33, v(34, v(35, v(36, v(37, v(40, NULL))))))))))))))));
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
