
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
    return v(139, v(629, v(398, v(3, v(856, v(389, v(464, v(923, v(819, v(896, v(776, v(344, v(466, v(384, v(865, v(386, v(264, v(607, v(340, v(329, v(717, v(1, v(236, v(613, v(924, v(839, v(40, v(439, v(462, v(294, v(521, v(780, v(394, v(711, v(240, v(263, v(413, v(321, v(994, v(978, v(132, v(771, v(842, v(425, v(437, v(673, v(541, v(1, v(359, v(667, v(375, v(507, v(87, v(355, v(925, v(458, v(349, v(738, v(352, v(348, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(21, NULL);
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
