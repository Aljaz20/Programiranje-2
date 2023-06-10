
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
    return v(945, v(601, v(591, v(173, v(608, v(406, v(930, v(761, v(624, v(977, v(144, v(142, v(914, v(663, v(758, v(3, v(998, v(228, v(241, v(753, v(628, v(197, v(919, v(273, v(714, v(529, v(329, v(821, v(729, v(522, v(8, v(945, v(744, v(866, v(156, v(924, v(882, v(277, v(613, v(743, v(654, v(681, v(905, v(443, NULL))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(2, v(8, v(10, v(12, v(13, v(15, v(16, v(19, v(21, v(22, v(23, v(25, v(26, v(29, v(31, v(32, v(33, v(35, v(37, v(38, v(39, v(42, NULL))))))))))))))))))))));
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
