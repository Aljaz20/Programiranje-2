
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
    return v(402, v(666, v(176, v(951, v(81, v(488, v(633, v(154, v(74, v(264, v(251, v(995, v(781, v(850, v(584, v(394, v(186, v(976, v(643, v(506, v(300, v(638, v(835, v(119, v(638, v(786, v(181, v(907, v(152, v(13, v(562, v(90, v(676, v(574, v(812, v(740, v(853, v(282, v(447, v(9, v(835, v(444, v(332, v(21, v(312, v(755, v(12, v(928, v(283, v(116, v(401, v(872, v(539, v(208, v(961, v(89, v(473, v(30, v(348, v(623, v(68, v(653, v(351, v(320, v(743, v(291, v(677, v(980, v(342, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

Vozlisce* zgradiIndekse() {
    return v(7, v(18, v(21, v(23, v(25, v(53, v(56, v(58, v(65, v(68, NULL))))))))));
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
