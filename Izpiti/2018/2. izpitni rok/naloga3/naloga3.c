
/*
 * Va"sa re"sitev tretje naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 3 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdlib.h>

int prestej(int n, int k){
    if(k < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }

    return prestej(n-1, k+1) + prestej(n-1, k-1);
}

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);

    printf("%d\n", prestej(n,k));

    return 0;
}
