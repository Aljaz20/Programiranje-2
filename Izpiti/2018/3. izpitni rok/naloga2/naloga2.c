
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

Vozlisce *odstrani(Vozlisce *osnova, Vozlisce *indeksi)
{
   Vozlisce* zacetek = NULL;
   Vozlisce* temp = NULL;
   int i = 0;
   int preveri = 0;
   while(osnova != NULL){
    if(indeksi == NULL){
        if(i==0){
            return osnova;
        }
        temp->naslednje = osnova;
        break;
    }
    if(indeksi->podatek == i){
        osnova = osnova->naslednje;
        indeksi = indeksi->naslednje;
        i++;
        continue;
    }
    if(preveri== 0) {
        temp = osnova;
        
        zacetek = temp;
        preveri = 1;
        
    }else{
        temp->naslednje = osnova;
        temp = temp->naslednje;
    }
    osnova = osnova->naslednje;
    temp->naslednje = NULL;
    i++;

   }
   return zacetek;

}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
