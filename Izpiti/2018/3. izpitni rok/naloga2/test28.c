
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
    return v(839, v(81, v(612, v(787, v(316, v(423, v(460, v(166, v(295, v(797, v(897, v(451, v(433, v(481, v(758, v(665, v(905, v(498, v(415, v(290, v(177, v(848, v(30, v(743, v(4, v(891, v(711, v(386, NULL))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(2, v(3, v(5, v(6, v(7, v(8, v(9, v(10, v(13, v(22, v(23, NULL)))))))))));
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
