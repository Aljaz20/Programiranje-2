
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
    return v(359, v(973, v(627, v(217, v(131, v(580, v(992, v(457, v(266, v(291, v(241, v(20, v(635, v(138, v(750, v(536, v(396, v(754, v(918, v(384, v(414, v(343, v(750, v(467, v(184, v(280, v(437, v(42, v(684, v(182, v(428, v(910, v(656, v(51, v(360, v(274, v(594, v(318, v(632, v(725, v(156, v(566, v(193, v(482, v(109, v(888, v(198, v(822, v(75, v(560, v(166, v(762, v(801, v(432, v(917, v(697, v(480, v(889, v(402, v(158, v(994, v(355, v(257, v(263, v(279, v(385, v(513, v(1, v(134, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(2, v(4, v(6, v(7, v(8, v(10, v(11, v(12, v(14, v(15, v(16, v(17, v(18, v(19, v(21, v(22, v(24, v(25, v(26, v(30, v(32, v(33, v(34, v(35, v(36, v(39, v(40, v(42, v(43, v(45, v(46, v(47, v(48, v(50, v(51, v(52, v(53, v(54, v(57, v(58, v(59, v(60, v(62, v(63, v(65, v(66, v(67, NULL)))))))))))))))))))))))))))))))))))))))))))))));
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
