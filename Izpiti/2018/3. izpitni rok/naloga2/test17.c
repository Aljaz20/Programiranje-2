
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
    return v(865, v(852, v(635, v(183, v(249, v(418, v(731, v(547, v(403, v(847, v(452, v(887, v(861, v(851, v(329, v(679, v(516, v(240, v(903, v(638, v(569, v(327, v(98, v(42, v(939, v(965, v(117, v(433, v(521, v(24, v(44, v(492, v(219, v(65, v(589, v(620, v(899, v(749, v(470, v(462, v(936, v(930, v(697, v(761, v(340, v(185, v(283, v(727, v(658, v(321, v(695, v(404, v(817, v(647, v(592, v(678, v(719, v(261, v(802, v(849, v(423, v(503, v(906, v(660, v(53, v(355, v(693, v(613, v(93, v(833, v(939, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(1, v(2, v(3, v(4, v(5, v(6, v(7, v(8, v(9, v(10, v(11, v(12, v(13, v(14, v(15, v(17, v(18, v(21, v(22, v(24, v(27, v(28, v(29, v(30, v(31, v(33, v(35, v(38, v(39, v(41, v(42, v(44, v(45, v(48, v(49, v(51, v(52, v(53, v(54, v(56, v(58, v(59, v(60, v(61, v(62, v(64, v(65, v(66, v(67, v(69, v(70, NULL)))))))))))))))))))))))))))))))))))))))))))))))))));
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
