
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
    return v(210, v(23, v(943, v(709, v(466, v(25, v(123, v(431, v(162, v(547, v(219, v(539, v(535, v(226, v(2, v(979, v(37, v(602, v(928, v(148, v(405, v(744, v(704, v(383, v(817, v(350, v(348, v(285, v(480, v(293, v(615, v(195, v(119, v(855, v(681, v(926, v(730, v(958, v(604, v(989, v(108, v(581, v(528, v(180, v(195, v(36, v(64, v(524, v(374, v(703, v(943, v(178, v(571, v(402, v(637, v(568, v(999, v(352, v(836, v(407, v(153, v(314, v(870, v(534, v(232, v(649, v(909, v(368, v(902, v(905, v(616, v(314, v(495, v(761, v(858, v(228, v(360, v(573, v(776, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(10, v(12, v(17, v(20, v(23, v(27, v(31, v(36, v(46, v(51, v(61, v(69, v(70, NULL)))))))))))));
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
