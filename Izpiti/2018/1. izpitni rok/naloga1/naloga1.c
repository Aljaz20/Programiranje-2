
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *visine = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &visine[i]);
    }
    int stevilo = 0;
    int najvisji = 0;
    for(int i = n-1; i >=0; i--){
        if(visine[i] >= najvisji){
            stevilo++;
            najvisji = visine[i];
        }
    }
    printf("%d\n", stevilo);
    return 0;
}
