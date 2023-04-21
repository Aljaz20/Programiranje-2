
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "TW7t1khKoP9d8ASPxf5dauJyHDDl1tnwYqaWyciasetnZSo34rjAJZBCctbVu1t5BIIegt7K7BDjKS9WHN_3Yz",
    "ENFyXJbAS_Jzb3RldJpXNXyubIjw8sGhGGisru70oD4vZSyvHlH_JpSyYTteZBVhnXZ9r_Kmx0ZL1N0Sl4iZpq",
    "4BgwNJIGlLFPuHDe0OxfQNl9yw_wZX7pg5TWZUMrC7n0Cm4gQNjd6i7JgWkwkdC5l8LyaX2378WCTLh8E8z49u",
    "Wii3ZYa_sYZx6JVZMCGliJfyesXasgIztpZg9DAIeoAWCsqxCH0ohmOUOfC0Y9547zOkVwcGKyKePbvkTck9S3",
    "oAyygA6_1G3iuuXlMQbnO6lLKe0xb6Lgtw7KrVTtRdcqAJL4KImbuot7hyG6K8qZ5uFueRgXWFZjg0b5MLNwd3",
    "93n2QJk_eRpgBuh8d1UOGO05J13_gBi3NUPGAaDmKl_Ihzg70I1BTpoeKmTfEOblO7zKL9vqKExm_VUyRMhYja",
    "CMaJeUaFlwbFGnIKDM62qLLzWzQmtXYR61VXnIQRxfjFjRoYGZsllZfJFoJevdfLDaHmtdKbVs94j9RbtrEZhG",
    "MrhBngkTeE6KfXXDuUCVbwpVlMHg1MXIVxIySH12W6ogn2MDk69fKcnMwRT2CvwSpR4lkOQsmSRhv0RbWXxM7A",
    "t3BrFbYpbysb_3QV6k1vONxQJ2NX8_C1uaE2asXqiCIy8OwMphbU_Zz6xVxlRHEwF8kr3VZv_czIEX33La08JW",
    "cH8fLCkLglp9s8UoXt__jato7acJUuA9iqHCENtghe5D9mEt6ZgpymIBrAnfrqGCZCdLuRrhLQDjhwoyDtZulX",
    "eUcw6Kgls6Fwhm37_gNXCWPTPqc3f2PBpMMwsmL6CUobfxYv3MjdCjlabHa3M_f28e77gZQuDh40A9h6hbpCnC",
    "fZ1pnMmrX7Qww5uf8_tzPTS8bziynFFonRhhAm8UmNZICmPQPAMExrnQQZR6WvB7RnKG2xVFjyY6whToh5kJZS",
    "lTnBhEpZ7uBHc5JP1PC0CV4TytqyEjOOv009khRVQUCuOdfE9FJK8869BkefAbBV_0lIm244FOcI6VLETB2Bb_",
    "OzG4tOKMtSnqLNFretCmCbnmGHr3shQwMjkKxF2C9PgmEXlDk_5DgNo8Mtnb7CIVfrALPyY91IsBl1J99VS7q9",
    "RXTgvMd0PjcAOB0gLWKUwCA6jC8QJO9eM7D1UfIMeYM7NvSJWJgbhZ2YHERUy6zFZxkHrxZJOU8et8Bjld4bY2",
    "48De9ceuQUmXc_pYxHEP5fEnnhFGlKNoMt8YyBJ4BrhmXVdBdLWUDBoRXjU7oto_2KVu5bM1f7O27YXoinX5K6",
    "S3PSBBTxbl32mw7Di1Csjj0eicbG8qRIHr_vgnAEfN79Bueox6b_aCN0bjKN3rw9Fige7z8PNAzwfiAqfiqAIk",
    "Kv8mIsAIH0dwzxCbuOXN18PmpplhifQLIwybUkRRq6IIFnoxYIFhiAZLDnd1kQb8ieNAKX5SuUVNwb8QwUm2L1",
    "79PX7Z5CuLfayvyeYPEuRH8FlxM44dXDH2JFk1m1IZMLg8XHh9264Zd6rlfGXKs_AdKo4Sy46Ol6xSvtjYn_bt",
    "rNADpDBCyKgqiuA_Q4UcS6eCnvk8saV1APzEkTSzFVwZf844VhBmkkSvgThGJ1Hw35b5b2_SVnBO6s_rNYQ32M",
    "MutPhRuccKMPdaJcGxW1xrmuKB7gVL0tOfK4U276V99cGgAcJRjRsTu6N0yjYCeY1SA8Cafhh6QDpaW2DyJExv",
    "ytTXNjVVUgSUfbGWx7FXd3l2ehzVq1CnbYrlbTjjIha85KttQweOrw6kBXTEtqQuWlkZCW9dyrGTZia_Bwi_Kn",
    "puoWzkyMEHHWH4D6i8HwqrfJUoA33mAT62VGvufQbRyNl3d4_Q4X6R66YlTg_ji_Ar55hHf09valVoZoHMeufC",
    "aGMNGdJzuRIZ2UCqgZzH_cIsbveXIvXw0U0tNetbds6K3YYzOzeN3PRtTeDzS6tnolUilHti2feHtlyRO1sHHJ",
    "atsCm4NfJ0ipZ33bH8Fn6bA7AVgipQgpxwaFAHCHZC2_ZbmRNb6Hh7sLxXMBdLW8s2XEcAFoPz7sikAZvzsOV9",
    "Lb2cxICrSUyyPd8ZuMABQJ92W1_r_OXFLKy3qM_w6hrGOtzmgxVvfuOYVyByAVuCt4ucm7EwgpuMgEsa2hNLhN",
    "Sq_w1zpsCmaUcSl9m9uuXXQo6iWdZ3Xn5vAlq1Numo1q3r32uecBTY_GrdOUxdVA5oPuTkqvdcDbQ83I31FV2U",
    "pecvrM64GYDbUZWtYxFy5hMf2nhLNSwyWNfbXdXempkugxUok9OUR6iutdlnzoE7Cn458WCLvRbejbMoG8URxt",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 86);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
