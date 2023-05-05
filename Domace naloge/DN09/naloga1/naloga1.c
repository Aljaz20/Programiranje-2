
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"

void uredi(VO** opravili, int stVO) {
    for (int i = 0; i < stVO - 1; i++) {
        for (int j = i + 1; j < stVO; j++) {
            if (opravili[i]->ocena < opravili[j]->ocena) {
                VO* temp = opravili[i];
                opravili[i] = opravili[j];
                opravili[j] = temp;
            } else if (opravili[i]->ocena == opravili[j]->ocena && opravili[i]->vpisna > opravili[j]->vpisna) {
                VO* temp = opravili[i];
                opravili[i] = opravili[j];
                opravili[j] = temp;
            }
        }
    }
}

VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
    VO** opravili = malloc(stStudentov * sizeof(VO*));
    *stVO = 0;
    for (int i = 0; i < stStudentov; i++) {
        Student* student = studentje[i];
        for (int j = 0; j < student->stPO; j++) {
            if (strcmp(student->po[j].predmet, predmet) == 0 && student->po[j].ocena > 5) {
                VO* vo = malloc(sizeof(VO));
                vo->vpisna = student->vpisna;
                vo->ocena = student->po[j].ocena;
                opravili[*stVO] = vo;
                (*stVO)++;
                break;
            }
        }
    }
    uredi(opravili, *stVO);

    return opravili;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
