
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
    return v(181, v(548, v(724, v(354, v(484, v(94, v(557, v(442, v(288, v(464, v(79, v(822, v(250, v(362, v(612, v(160, v(948, v(21, v(778, v(148, v(476, v(827, v(433, v(154, v(12, v(184, v(888, v(66, v(223, v(524, v(324, v(129, v(528, v(196, v(719, v(565, v(1000, v(944, v(27, v(232, v(659, v(358, v(983, v(365, v(851, v(97, v(54, v(44, v(140, v(14, v(724, v(460, v(599, v(983, v(589, v(994, v(99, v(309, v(184, v(595, v(513, v(555, v(670, v(919, v(244, v(794, v(959, v(230, v(498, v(913, v(467, v(831, v(143, v(470, v(618, v(79, v(956, v(759, v(698, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(5, v(7, v(8, v(10, v(11, v(12, v(15, v(19, v(20, v(23, v(25, v(27, v(28, v(29, v(32, v(34, v(37, v(38, v(40, v(42, v(43, v(44, v(45, v(47, v(48, v(50, v(51, v(53, v(55, v(58, v(59, v(61, v(62, v(64, v(66, v(69, v(70, v(71, v(73, v(74, v(75, v(77, v(78, NULL)))))))))))))))))))))))))))))))))))))))))));
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
