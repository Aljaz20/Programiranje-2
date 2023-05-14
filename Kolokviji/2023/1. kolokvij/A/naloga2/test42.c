
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "lND",
    "AK",
    "3aIOCJy",
    "Km",
    "eX4lnLnkuk",
    "ef6Hx",
    "I9S2pNv",
    "DmoA",
    "7PWd9VkUK",
    "SpX",
    "ivJ",
    "qP",
    "QmtXG91HTv",
    "g9bGf",
    "fL",
    "N5Wo5y",
    "j5xIbXdAvX",
    "zaXcSl",
    "X",
    "spymXYO",
    "lT",
    "BF9iyIy9BG",
    "U",
    "xlOqlg2bxk",
    "Wsd8YksG",
    "YP",
    "WWX2l",
    "F0GOWsqjIP",
    "c",
    "QwfIY5HN",
    "dVqmPV",
    "QA7bdrlIX",
    "1",
    "wq",
    "Z",
    "CL3tpLgL",
    "TEDV7",
    "T2s",
    "FGuPm",
    "cCj4CED0S8",
    "24C1yeFFE",
    "plDb70TE",
    "_x2pfJnpd",
    "Z",
    "xK3",
    "AHu",
    "jQAhRRKM",
    "67hf",
    "DPMX",
    "Z5ba",
    "d",
    "HxPvnkLBqG",
    "lL",
    "772nON7Ok",
    "FgY",
    "Sv4",
    "0extJeHMe",
    "d93GFM8ym",
    "z2ZcF",
    "3FnSCDlU",
    "MAXzoIgx",
    "4",
    "mlRTLzWJ5",
    "5u9vHZNPsD",
    "NsC",
    "NYj4Y_QVf",
    "vxkKmaYas",
    "hUVX1sYvH",
    "j4oWzVq",
    "5ndlRjCzLS",
    "EQddVXu_",
    "ibfz6",
    "p5Yw",
    "O2es8e5ZN",
    "p5EnNTakIT",
    "41T",
    "cs16LjkB",
    "tKr",
    "sHRqAyHd",
    "EgCAzc",
    "Yr0Q",
    "0idt1p1t",
    "zFxlSElnpc",
    "qOUMVy",
    "sS",
    "eNdgK3D",
    "qPQUKpnem2",
    "Fcg4hY7z",
    "Zw_",
    "OK5y2nw",
    "xorz_SAoT",
    "P",
    "qVg",
    "Tq9WN4vINd",
    "PW",
    "oCaivP",
    "Ink1",
    "syEMFUk",
};

int main() {
    int stIzhodnih = 0;
    char** izhodni = poStolpcih(NIZI, sizeof(NIZI) / sizeof(NIZI[0]), &stIzhodnih);
    printf("%d\n", stIzhodnih);

    for (int i = 0; i < stIzhodnih; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    free(izhodni);
    return 0;
}