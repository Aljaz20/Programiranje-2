
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
    return v(113, v(362, v(569, v(573, v(755, v(992, v(840, v(678, v(1, v(360, v(741, v(677, v(527, v(15, v(382, v(504, v(500, v(265, v(587, v(898, v(957, v(442, v(66, v(981, v(397, v(138, v(21, v(793, v(349, v(536, v(873, v(593, v(331, v(35, v(334, v(129, v(748, v(202, v(109, v(671, v(350, v(158, v(613, v(960, v(418, v(406, v(206, v(716, v(429, v(119, NULL))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(7, v(10, v(11, v(12, v(34, v(41, v(44, v(46, v(48, NULL)))))))));
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
