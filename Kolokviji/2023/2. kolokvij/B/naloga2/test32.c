#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {9973, 4508, 234, 7504, 8851, 4498, 4321, 5160, 192, 6275, 6130, 7602, 3402, 888, 206, 4783, 1, 9999, 8088, 3223, 1690, 3549, 2996, 402, 6131, 4112, 7980, 7061, 6051, 1318, 5493, 3820, 2223, 3976, 3723, 4942, 4604, 607, 4822, 5410, 4605, 8753, 6228, 3005, 5175, 6765, 3738, 1247, 8989, 5471, 4022, 5909, 4775, 6188, 3452, 9220, 4736, 7318, 8175, 6239, 1550, 9212, 6088, 1482, 634, 6196, 6902, 7151, 6675, 4209, 7900, 4982, 8172, 4192, 6661, 5669, 689, 9468, 3262, 27, 4618, 7375, 5232, 7492, 6990, 9096, 9879, 4551, 4880, 9798, 5523, 119, 1716, 3708, 2234, 9041, 5713, 4845, 9447, 8741, 4813, 4506, 9453, 3731, 7559, 6221, 3371, 1003, 7027, 3216, 8413, 1534, 3455, 3778, 3225, 1388, 4966, 1547, 4040, 1072, 8388, 8176, 7974, 7376, 779, 584, 9298, 4464, 6018, 2607, 3805, 2051, 7342, 3421, 1093, 6094, 9944, 619, 3555, 4973, 6203, 2365, 4503, 5096, 5261, 3220, 1180, 7088, 3245, 6829, 5007, 1260, 9677, 5878, 7973, 4269, 2198, 2864, 9711, 6513, 7528, 6098, 6853, 8940, 4353, 5445, 6067, 4043, 1203, 7867, 1799, 8302, 6989, 4933, 5746, 7423, 8938, 7299, 1567, 7214, 9013, 3910, 19, 4193, 7791, 3109, 3558, 8886, 2762, 1680, 4300, 2753, 1026, 9725, 9963, 3694, 3942, 2026, 8591, 3833, 7822, 6725, 6548, 3975, 6504, 4691, 9555, 8241, 6714, 7369, 3011, 9759, 8380, 5783, 7017, 2015, 7138, 8432, 5195, 8580, 255, 6390, 8306, 8712, 5824, 5256, 2650, 3167, 2530, 5525, 4502, 5763, 4438};
int _RAZREDI[] = {0, 0, 1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 5, 6, 7, 0, 0, 0, 8, 9, 0, 10, 0, 0, 11, 5, 12, 13, 14, 15, 0, 0, 10, 0, 0, 0, 1, 16, 17, 18, 11, 12, 19, 0, 0, 0, 20, 21, 22, 0, 23, 24, 4, 21, 23, 25, 6, 26, 27, 28, 29, 5, 30, 29, 0, 30, 4, 31, 5, 32, 33, 2, 34, 10, 35, 33, 26, 11, 0, 1, 36, 34, 37, 0, 38, 27, 2, 39, 40, 40, 20, 1, 41, 42, 43, 0, 33, 42, 43, 33, 17, 44, 45, 0, 46, 20, 34, 21, 0, 0, 47, 17, 48, 49, 50, 51, 34, 0, 52, 53, 17, 39, 54, 0, 28, 55, 5, 56, 11, 57, 58, 19, 33, 48, 54, 8, 59, 0, 60, 61, 1, 58, 0, 0, 41, 62, 0, 4, 63, 64, 42, 0, 0, 48, 9, 65, 43, 43, 0, 66, 67, 54, 68, 43, 40, 69, 70, 0, 71, 63, 25, 72, 73, 23, 0, 74, 75, 0, 76, 53, 72, 33, 0, 77, 43, 78, 0, 79, 12, 42, 80, 81, 42, 82, 48, 83, 84, 33, 85, 25, 86, 42, 39, 87, 75, 34, 88, 89, 90, 91, 92, 93, 27, 94, 54, 95, 84, 96, 97, 98, 43, 99, 100, 0, 101};
int _ST_VOZLISC = sizeof(_RAZREDI) / sizeof(_RAZREDI[0]);
#define  _ST_RAZREDOV (sizeof(_P) / sizeof(_P[0]))
Vozlisce* _I2V[_ST_RAZREDOV];
bool _POBRISAN[_M];

Vozlisce* _ustvari() {
    Vozlisce* zacetek = NULL;
    Vozlisce* prej = NULL;
    int zadnjiRazred = -1;

    for (int i = 0; i < _ST_VOZLISC; i++) {
        Vozlisce* v = calloc(1, sizeof(Vozlisce));
        int r = _RAZREDI[i];
        if (r > zadnjiRazred) {
            zadnjiRazred = r;
            v->p = malloc(sizeof(int));
            *v->p = _P[r];
            _I2V[r] = v;
        } else {
            v->p = _I2V[r]->p;
        }
        if (i == 0) {
            zacetek = v;
        } else {
            prej->naslednje = v;
        }
        prej = v;
    }
    return zacetek;
}

void _izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        printf("%s%d", (w == v ? "" : ", "), *w->p);
        w = w->naslednje;
    }
    printf("]\n");
}

void _preveriIstovetnost(Vozlisce* v) {
    int i = 0;
    for (Vozlisce* w = v; w != NULL; w = w->naslednje) {
        printf("%d", w == _I2V[i]);
        i++;
    }
    printf("\n");
}

void _pocisti(Vozlisce* v) {
    if (v != NULL) {
        _pocisti(v->naslednje);
        int pp = *v->p;
        if (!_POBRISAN[pp]) {
            free(v->p);
            v->p = NULL;
            _POBRISAN[pp] = true;
        }
        free(v);
    }
}

int main() {
    Vozlisce* v = _ustvari();

    printf("Prej:\n");
    _izpisi(v);
    printf("\n");

    izlociDuplikate(v);

    printf("Potem:\n");
    _izpisi(v);
    printf("\n");

    printf("Istovetnost ohranjenih vozlisc:\n");
    _preveriIstovetnost(v);

    _pocisti(v);

    return 0;
}
