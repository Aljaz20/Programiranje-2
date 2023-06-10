
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"
#include <stdbool.h> 


Vozlisce *vstaviUrejeno(Vozlisce *zacetek, int element)
{
    Vozlisce* temp = calloc(1, sizeof(Vozlisce));
    temp->podatek = element;
    temp->n = NULL;
    temp->nn = NULL;
    if(zacetek == NULL){
        return temp;
    }
    if(zacetek->n ==NULL){
    	if(zacetek->podatek <= element){
    		zacetek->n=temp;
    		return zacetek;
    	}
    }
    if(zacetek->podatek > element){
        temp->n = zacetek;
        temp->nn=zacetek->n;
        return temp;
    }
    if(zacetek->n->podatek > element){
        temp->n = zacetek->n;
        temp->nn = zacetek->nn;
        zacetek->n = temp;
        zacetek->nn= temp->n;
        return zacetek;
    }

    Vozlisce* drugo = zacetek;
    Vozlisce* prvo = zacetek->n;
    while(prvo->n != NULL && prvo->n->podatek < element){
        drugo = prvo;
        prvo = prvo->n;
    }
    temp->n = prvo->n;
    temp->nn = prvo->nn;
    prvo->nn = prvo->n;
    prvo->n=temp;
    drugo->nn = temp;
    

    return zacetek;
}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
