
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

void izpisi(Student** studentje, int stStudentov) {
    for (int i = 0;  i < stStudentov;  i++) {
        printf("%d: [", studentje[i]->vpisna);
        int stPO = studentje[i]->stPO;
        PO* po = studentje[i]->po;
        for (int j = 0;  j < stPO;  j++) {
            if (j > 0) {
                printf(", ");
            }
            printf("%s/%d", po[j].predmet, po[j].ocena);
        }
        printf("]\n");
    }
    printf("\n");
}

void pocisti(Student** studentje, int stStudentov) {
    for (int i = 0;  i < stStudentov;  i++) {
        free(studentje[i]->po);
        free(studentje[i]);
    }
}

int __main__() {
    Student* studentje[10];
    int stStudentov = 0;

    stStudentov = dodaj(studentje, stStudentov, 333, "ARS", 8);
    stStudentov = dodaj(studentje, stStudentov, 333, "ARS", 10);
    stStudentov = dodaj(studentje, stStudentov, 333, "ARS", 6);
    stStudentov = dodaj(studentje, stStudentov, 333, "ARS", 9);

    izpisi(studentje, stStudentov);
    pocisti(studentje, stStudentov);

    exit(0);
    return 0;
}
