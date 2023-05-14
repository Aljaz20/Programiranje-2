#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ID[10001][155];
int zap = 0;

void izpisi(char ***samostalniki, char **glagoli, char *prva, int s, int g, int m, char **besede, int glag, int samostal, int dolzina, int maxdolzina){
    
    
    if (glag == g || samostal >= s || dolzina == maxdolzina)
    {   
        if(dolzina %3 == 1){
            int prev = 0;
            for(int i = 0; i < dolzina; i++){
                if(strcmp(besede[i], ",") == 0){
                    prev = 1;
                    break;
                }
            }
            if(prev == 0){
                return;
            }
        }
        if(dolzina == 0){
            return;
        }
        int j = 1;
        printf("%c", besede[0][0] + 'A' - 'a');
        while (besede[0][j] != '\0')
        {
            printf("%c", besede[0][j]);
            j++;
        }
        if (strcmp(besede[1], ", ki") != 0)
        {
            printf(" ");
        }

        for (int i = 1; i < dolzina; i++)
        {
            printf("%s", besede[i]);
            if (i != dolzina - 1 && strcmp(besede[i + 1], ",") != 0 && strcmp(besede[i + 1], ", ki") != 0)
            {
                printf(" ");
            }
        }
        printf(".\n");
        return;
    }
    int preveri = 1;
    int temp = glag;
    for (samostal; samostal < s; samostal++){
        for(glag = temp; glag < g; glag++){
            if (dolzina == 0){
                    strcpy(besede[dolzina], prva);
                    strcpy(besede[dolzina + 1], glagoli[glag]);
                    strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                    izpisi(samostalniki, glagoli, prva,s, g, m, besede, glag + 1, samostal + 1, dolzina + 3, maxdolzina);

                    if (m != 0){
                        strcpy(besede[dolzina + 1], ", ki");
                        strcpy(besede[dolzina + 2], glagoli[glag]);
                        strcpy(besede[dolzina + 3], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli, prva, s, g, m - 1, besede, glag + 1, samostal + 1, dolzina + 4, maxdolzina);
                    
                }
            }
            else{
                if (dolzina % 3 == 1 && strcmp(besede[dolzina - 3], ",") != 0){
                    strcpy(besede[dolzina], ",");
                    strcpy(besede[dolzina + 1], glagoli[glag]);
                    strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                    izpisi(samostalniki, glagoli, prva,s, g, m, besede, glag + 1, samostal + 1, dolzina + 3, maxdolzina);

                    if (m != 0){
                        strcpy(besede[dolzina], ", ki");
                        strcpy(besede[dolzina + 1], glagoli[glag]);
                        strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli, prva, s, g, m - 1, besede, glag + 1, samostal + 1, dolzina + 3, maxdolzina);
                    }
                }
                else{
                    if(preveri == 1){
                        izpisi(samostalniki, glagoli, prva,s, g, m, besede, glag, samostal, dolzina, dolzina);
                        preveri = 0;
                    }
                    
                    if (m != 0){
                        strcpy(besede[dolzina], ", ki");
                        strcpy(besede[dolzina + 1], glagoli[glag]);
                        strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli,prva, s, g, m - 1, besede, glag + 1, samostal + 1, dolzina + 3, maxdolzina);
                    }
                }
            }
        }
    }
}

int main()
{
    int s, g, m;
    scanf("%d\n", &s);
    char ***samostalniki = (char ***)malloc(s * sizeof(char **));
    for (int i = 0; i < s; i++)
    {
        samostalniki[i] = (char **)malloc(2 * sizeof(char *));
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            samostalniki[i][j] = (char *)malloc(21 * sizeof(char));
            char c;
            scanf("%c", &c);
            for (int k = 0; c != ' ' && c != '\n'; k++)
            {
                samostalniki[i][j][k] = c;
                scanf("%c", &c);
                samostalniki[i][j][k + 1] = '\0';
            }
        }
    }
    scanf("%d\n", &g);
    char **glagoli = (char **)malloc(g * sizeof(char *));
    for (int i = 0; i < g; i++)
    {
        glagoli[i] = (char *)malloc(21 * sizeof(char));
        char c;
        scanf("%c", &c);
        for (int j = 0; c != ' ' && c != '\n'; j++)
        {
            glagoli[i][j] = c;
            scanf("%c", &c);
            glagoli[i][j + 1] = '\0';
        }
    }
    scanf("%d\n", &m);
    int maxdolzina = 3 * (m + 1) + 1;
    char **besede = (char **)calloc(maxdolzina, sizeof(char *));
    for (int i = 0; i < maxdolzina; i++)
    {
        besede[i] = (char *)calloc(21, sizeof(char));
    }
    for(int i=0; i < s; i++){
        izpisi(samostalniki, glagoli, samostalniki[i][0],s,g, m, besede, 0, i+1, 0, maxdolzina);
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            free(samostalniki[i][j]);
        }
        free(samostalniki[i]);
    }
    free(samostalniki);
    for (int i = 0; i < g; i++)
    {
        free(glagoli[i]);
    }
    free(glagoli);
    return 0;
}