
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
    return v(264, v(430, v(66, v(811, v(73, v(598, v(649, v(743, v(119, v(774, v(352, v(505, v(78, v(349, v(158, v(802, v(548, v(878, v(524, v(845, v(375, v(792, v(965, v(145, v(460, v(889, v(664, v(959, v(174, v(472, v(898, v(713, v(37, v(991, v(340, v(468, v(544, v(644, v(402, v(215, v(882, v(863, v(139, v(875, v(191, v(928, v(57, v(338, v(520, v(847, v(826, v(416, v(844, v(374, v(738, v(425, v(536, v(379, v(318, v(267, v(149, v(718, v(460, v(871, v(490, v(376, v(718, v(354, v(173, v(770, v(332, v(717, v(505, v(621, v(536, v(275, v(849, v(224, v(334, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(1, v(2, v(3, v(4, v(5, v(6, v(7, v(8, v(9, v(10, v(11, v(12, v(13, v(14, v(15, v(16, v(17, v(18, v(19, v(20, v(21, v(22, v(23, v(24, v(25, v(26, v(27, v(28, v(29, v(30, v(31, v(32, v(33, v(34, v(35, v(36, v(37, v(38, v(39, v(40, v(41, v(42, v(43, v(44, v(45, v(46, v(47, v(48, v(49, v(50, v(51, v(52, v(53, v(54, v(55, v(56, v(57, v(58, v(59, v(60, v(61, v(62, v(63, v(64, v(65, v(66, v(67, v(68, v(69, v(70, v(71, v(72, v(73, v(74, v(75, v(76, v(77, v(78, NULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
