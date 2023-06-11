#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#include <stdio.h>

#include <stdio.h>
#include <string.h>


int preveriGnezdenje(char* s) {
    int i = 0,j = 0;
    char c[strlen(s) - 1];


   for (i = 0; i <= strlen(s) - 1; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i]=='[')
            c[j++] = s[i];
        else
        {
            if (s[i] == ')' && c[--j] == '(')
            ;
            else
            {
                if (s[i] == '}' && c[--j] == '{')
                ;
                else
                {
                    if (s[i]==']'&&c[--j]=='[')
                    ;
                    else
                        return 0;

                        }
                }
        }
    }
    if (j == 0){
        return 1;
    }
    return 0;
}




int main() {
    int n;
    scanf("%d\n", &n);
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        char* s = (char *)malloc(1001 * sizeof(char));
        scanf("%s", s);
        count += preveriGnezdenje(s);
    }
    printf("%d\n", count);
    return 0;
}


