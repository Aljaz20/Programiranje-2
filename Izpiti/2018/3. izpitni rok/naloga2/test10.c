
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
    return v(469, v(115, v(192, v(662, v(990, v(516, v(780, v(741, v(978, v(53, v(208, v(833, v(25, v(36, v(91, v(68, v(700, v(154, v(617, v(996, v(932, v(43, v(16, v(515, v(723, v(408, v(606, v(73, v(916, v(408, v(450, v(70, v(909, v(720, v(652, v(549, v(942, v(453, v(367, v(891, v(858, v(224, v(618, v(690, v(722, v(228, v(243, v(991, v(378, v(835, v(486, v(491, v(450, v(207, v(270, v(881, v(399, v(42, v(945, v(963, v(706, v(615, v(795, v(874, v(120, v(912, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(44, NULL);
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
