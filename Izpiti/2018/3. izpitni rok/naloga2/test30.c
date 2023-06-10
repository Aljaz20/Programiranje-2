
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
    return v(25, v(504, v(997, v(19, v(612, v(977, v(286, v(846, v(99, v(315, v(857, v(274, v(359, v(210, v(380, v(486, v(630, v(305, v(384, v(209, v(348, v(55, v(199, v(169, v(149, v(582, v(420, v(869, v(714, v(693, v(459, v(793, v(220, v(683, v(932, v(131, v(83, v(86, v(95, v(319, v(768, v(566, v(750, v(489, v(133, v(495, v(881, v(3, v(809, v(857, v(727, v(200, v(362, v(537, v(674, v(834, v(646, v(630, v(792, v(407, v(276, v(552, v(356, v(551, v(252, v(343, v(107, v(540, v(125, v(555, v(643, v(330, v(152, v(685, v(65, v(313, v(590, v(532, v(266, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(1, v(2, v(3, v(4, v(5, v(6, v(8, v(9, v(10, v(11, v(13, v(15, v(16, v(17, v(18, v(20, v(21, v(22, v(23, v(24, v(25, v(26, v(31, v(32, v(33, v(34, v(35, v(37, v(38, v(39, v(40, v(41, v(42, v(43, v(44, v(45, v(46, v(47, v(49, v(50, v(51, v(52, v(55, v(56, v(57, v(58, v(59, v(60, v(61, v(62, v(63, v(64, v(66, v(67, v(68, v(70, v(71, v(72, v(73, v(75, v(76, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
