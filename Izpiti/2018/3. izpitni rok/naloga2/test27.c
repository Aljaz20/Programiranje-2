
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
    return v(756, v(359, v(298, v(754, v(700, v(3, v(203, v(830, v(478, v(990, v(220, v(311, v(748, v(513, v(50, v(205, v(651, v(797, v(168, v(909, v(308, v(945, v(318, v(940, v(652, v(326, v(147, v(539, v(748, v(752, v(3, v(135, NULL))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(1, v(4, v(9, v(10, v(16, v(17, v(22, v(24, v(31, NULL)))))))));
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
