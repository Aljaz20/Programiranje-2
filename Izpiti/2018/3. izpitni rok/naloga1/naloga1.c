
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

int main()
{
    int n;
    scanf("%d", &n);
    char a = ' ';
    char prejsni = '_';
    for(int i = 0; i < n; i++){
        scanf("%c", &a);
        if(a==' '){
            i--;
            continue;
        }
        if(prejsni == '_'){
            if(a <= 'z' && a >= 'a'){
                a -= 32;
            }
        }
        printf("%c", a);
        prejsni = a;
        
    }


    return 0;
}
