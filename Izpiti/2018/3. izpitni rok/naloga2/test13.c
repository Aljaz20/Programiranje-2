
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
    return v(933, v(29, v(701, v(773, v(25, v(711, v(557, v(322, v(222, v(313, v(681, v(641, v(530, v(635, v(477, v(3, v(686, v(983, v(235, v(820, v(200, v(911, v(796, v(511, v(367, v(232, v(495, v(269, v(348, v(391, v(827, v(501, v(496, v(571, v(983, v(206, v(880, v(825, v(792, v(368, v(75, v(32, v(993, v(229, v(144, v(12, v(396, v(924, v(500, v(770, v(602, v(991, v(248, v(26, v(846, v(886, v(582, v(517, v(359, v(255, v(584, v(402, v(461, v(506, v(559, v(609, v(58, v(940, v(695, v(904, v(11, v(20, v(814, v(923, v(547, v(410, v(152, NULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
