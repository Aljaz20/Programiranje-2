
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    for(int i = 0; i < stStudentov; i++){
        if(studentje[i]->vpisna == vpisna){
            return i;
        }
    }
    return -1;
}

int poisciPO(Student* student, char* predmet) {
    for (int i = 0; i < student->stPO; i++) {
        if (strcmp(student->po[i].predmet, predmet) == 0) {
            return i;
        }
    }
    return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    int indeks = poisciStudenta(studentje, stStudentov, vpisna);
    
    if(indeks == -1){
        Student* st = (Student*) malloc(sizeof(Student));
        st->vpisna = vpisna;
        st->po = (PO*) malloc(10*sizeof(PO));
        st->stPO = 1;
        st->po[0] = (PO) {"", ocena};
        strcpy(st->po[0].predmet, predmet);
        studentje[stStudentov] = st;
        stStudentov++;
        studentje[stStudentov] = NULL;
    }else{
        int ind = poisciPO(studentje[indeks], predmet);
        
        if(ind == -1){
            studentje[indeks]->po[studentje[indeks]->stPO] = (PO) {"", ocena};
            strcpy(studentje[indeks]->po[studentje[indeks]->stPO].predmet, predmet);
            studentje[indeks]->stPO++;
        }else{
            studentje[indeks]->po[ind].ocena = ocena;
        }
    }
    return stStudentov;

}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
