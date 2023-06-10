
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
    return v(760, v(544, v(179, v(539, v(599, v(37, v(406, v(528, v(90, v(913, v(454, v(988, v(369, v(279, v(154, v(661, v(776, v(849, v(531, v(463, v(397, v(629, v(306, v(311, v(593, v(625, v(276, v(453, NULL))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(2, v(3, v(8, v(9, v(11, v(12, v(16, v(17, v(18, v(19, v(20, v(24, v(25, v(26, v(27, NULL)))))))))))))));
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
