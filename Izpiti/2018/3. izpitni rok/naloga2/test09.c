
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
    return v(377, v(92, v(401, v(314, v(612, v(575, v(955, v(640, v(681, v(165, v(682, v(667, v(539, v(946, v(564, v(644, v(349, v(226, v(141, v(270, v(910, v(575, v(431, v(283, v(629, v(602, v(704, v(348, v(685, v(193, v(752, v(629, v(645, v(413, v(696, v(203, v(693, v(834, v(496, v(444, v(281, v(154, v(623, v(986, v(961, v(852, v(446, v(308, v(706, v(862, v(390, v(20, v(183, v(296, v(366, v(704, v(384, v(982, v(466, v(174, v(140, v(263, v(139, v(494, v(132, v(84, v(727, v(749, v(143, v(402, v(948, v(633, v(802, v(71, v(594, v(232, v(453, v(215, v(61, v(699, v(53, v(419, v(855, v(357, v(395, v(731, v(168, v(40, v(340, v(79, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(59, NULL);
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
