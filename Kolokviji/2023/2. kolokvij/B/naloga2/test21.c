#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {7781, 4144, 9414, 1408, 1185, 9172, 3706, 841, 9896, 7854, 4682, 7132, 4252, 810, 3517, 76, 6270, 9060, 1966, 6002, 1795, 3890, 9748, 1626, 7574, 7689, 5059, 7349, 4843, 8358, 5987, 5052, 3646, 9330, 1420, 7623, 5830, 6117, 3341, 6308, 540, 3465, 6890, 4047, 5332, 2687, 9150, 2849, 1089, 2112, 2035, 334, 7842, 4932, 5748, 3812, 3828, 6773, 2098, 6348, 9471, 6851, 7445, 1945, 9593, 2086, 7594, 7388, 779, 610, 834, 4393, 1047, 7905, 1973, 8329, 6694, 5022, 1279, 4608, 5912, 8328, 9282, 1600, 7126, 366, 1382, 4234, 4739, 6746, 4423, 5552, 7021, 1710, 6433, 8711, 8294, 7419, 4679, 9743, 7573, 8272, 7986, 5318, 1183, 4107, 1735, 6737, 3607, 8178, 1853, 7809, 4534, 6576, 2473, 7817, 7658, 6101, 9554, 5380, 5733, 3030, 4167, 5334, 8757, 541, 8959, 9800, 5935, 1467, 1720, 7471, 6402, 6463, 389, 9277, 459, 7458, 2482, 1386, 7768, 9070, 9102, 2167, 2906, 3187, 7272, 9914, 4327, 8744, 466, 8936, 1153, 5004, 8325, 3856, 2060, 9469, 7461, 9774, 9761, 7417, 8336, 4056, 8611, 5424, 7073, 5352, 339, 6939, 5780, 416, 6649, 2702, 1410, 7010, 2814, 4661, 7927, 3298, 8636, 6963, 7886, 2235, 2804, 5647, 6486, 8495, 2741, 7158, 2388, 3639, 312, 3096, 4519, 1604, 7950, 9792, 1800, 8946, 1694, 9702, 1128, 5607, 7081, 8720, 1565, 7413, 7613, 5940, 4141, 7131, 5158, 947, 1076, 6696, 4142, 9529, 6239, 7110, 192, 2980, 391, 6966, 5338, 7500, 7497, 981, 8137, 2596, 8170, 1711, 9234, 2590, 3473, 5585, 2068, 1550, 7352, 2909, 9438, 6568, 5455, 5278, 5421, 4424, 4329, 697, 8141, 999, 4795, 3761, 8684, 4936, 2371, 3574, 7287, 4452, 2180, 2081, 8630, 678, 4062, 6254, 7670, 9974, 87, 2050, 3917, 8963, 5977, 9200, 8096, 5482, 6714, 1480, 4421, 6386, 5515, 1381, 4274, 7822, 2474, 2054, 1095, 972, 5936, 7697, 4370, 5117, 3938, 7385, 8276, 7523, 1299, 1067, 1271, 9659, 6658, 7678, 8490, 7745, 3309, 1340, 9385, 2525, 6631, 2341, 2936, 4633, 3844, 4544, 3075, 7876, 8139, 2633, 9526, 7924, 5645, 2845, 2360, 7739, 5925, 6019, 5146, 6538, 9770, 7867, 6303, 9433, 1526, 985, 1060, 4463, 2396, 8334, 3344, 9906, 7921, 3231, 8612, 820, 7041, 8282, 7378, 3215, 5154, 3557, 1524, 9065, 8552, 962, 6229, 9821, 8597, 1857, 4380, 5769, 2048, 3707, 8407, 9179, 5098, 3254, 9337, 9545, 6546, 7718, 9312, 8403, 4722, 1034, 1413, 210, 671, 1442, 3228, 1062, 5521, 9675, 1267, 749, 226, 7069, 1638, 2659, 7944, 5308, 6943, 5418, 7315, 7304, 8344, 4949, 7354, 7072, 5680, 5852, 647, 4647, 9775, 6927, 3359, 2544, 4796, 4521, 1653, 618, 8198, 3565, 6682, 5287, 5859, 6512, 1740, 5289, 3411, 5978, 5312, 4992, 2140, 6801, 5757, 4719, 9888, 9727, 396, 9177, 341, 4323, 1441, 6115, 8142, 9138, 6134, 5962, 5810, 2850, 2897, 681, 2303, 270, 3137, 8269, 6809, 9769, 5700, 1514, 9251, 5407, 8335, 5209, 9493, 2080, 1465, 6510, 9559, 4402, 731, 9872, 5611, 885, 6253, 8743, 1829, 4282, 9419, 9746, 4746, 7001, 2577, 1495, 5170, 596, 3659, 7328, 6, 9252, 2000, 1913, 5562, 286, 7652, 6712, 9181, 7685, 4020, 8566, 3999, 3377, 5040, 9898, 4768, 9796, 9753, 3358, 8095, 4206, 5016, 9439, 7674, 8094, 924, 9749, 8202, 623, 2480, 4429, 4428, 5406, 3859, 4631, 8326, 6074, 738, 4455, 8896, 6492, 4562, 1474, 8660, 6106, 85, 9379, 9871, 421, 8308, 1975, 1478, 6804, 6181, 4178, 9689, 4944, 7453, 6337, 7816, 1428, 4879, 6343, 2606, 6346, 3964, 3237, 5497, 2479, 6721, 5657, 3835, 6608, 6153, 24, 7508, 9962, 1809, 4014, 1093, 5691, 7149, 1070, 7447, 5702, 7943, 6979, 3410, 33, 7808, 5324, 513, 9980, 8125, 7322, 6122, 1971, 1100, 8228, 314, 9956, 8129, 4887, 6247, 4217, 6687, 1176, 9589, 9349, 6685, 7152, 2410, 6704, 1864, 9601, 2552, 1246, 4271, 5823, 741, 4335, 9509, 1048, 6889, 704, 9766, 9450, 64, 6781, 4837, 1243, 8041, 2806, 5486, 2646, 9697, 6005, 2348, 8900, 1672, 7744, 5031, 6578, 160, 7505, 9175, 8749, 5715, 6758, 8904, 2133, 1102, 5498, 2698, 9080, 4283, 1013, 2066, 3190, 9566, 3357, 1463, 6989, 6169, 8017, 6371, 3931, 3985, 598, 5370, 1331, 3558, 9125, 7167, 9710, 3423, 2462, 6824, 6740, 1163, 8734, 8394, 813, 5698, 9694, 3803, 8302, 8577, 8877, 4730, 5078, 2570, 5249, 3546, 6302, 2308, 5195, 2641, 4336, 4068, 9108, 1968, 4737, 8497, 8371, 5309, 4488, 8166, 4721, 7563, 7263, 5804, 8063, 2333, 3752, 5950, 8951, 8024, 8459, 8814, 9324, 4306, 9828, 1336, 1202, 1275, 5120, 2415, 1447, 8855, 5007, 9368, 7493, 2773, 7114, 4220, 4401, 1024, 7953, 9374, 4292, 2884, 6160, 3740, 9028, 4155, 3842, 9260, 3754, 1909, 9608, 5222, 3367};
int _RAZREDI[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 7, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 17, 53, 54, 55, 56, 7, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 90, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 49, 134, 135, 136, 137, 138, 139, 75, 140, 141, 142, 52, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 11, 162, 163, 164, 165, 166, 167, 100, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 207, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 49, 186, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 32, 243, 244, 245, 246, 247, 248, 249, 250, 251, 73, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 15, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 221, 341, 342, 343, 344, 345, 346, 347, 348, 263, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 53, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 303, 375, 376, 377, 378, 207, 379, 182, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 348, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 20, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 88, 403, 427, 428, 429, 430, 374, 431, 432, 433, 434, 435, 188, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 329, 474, 475, 26, 476, 477, 478, 479, 391, 480, 481, 482, 319, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 210, 0, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 141, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 374, 535, 105, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 121, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 4, 609, 610, 611, 612, 613, 614, 518, 615, 616, 617, 618, 619, 620, 621, 622, 623, 114, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 533, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688};
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
