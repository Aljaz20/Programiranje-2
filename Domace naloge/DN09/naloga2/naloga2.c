#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ID[10001][155];
int zap = 0;

void izpisi(char ***samostalniki, char **glagoli, int s, int g, int m, char **besede, int samos, int glag, int samostal, int dolzina, int maxdolzina, char *id){
    
    
    if (samos == s || glag == g || samostal == s || dolzina == maxdolzina)
    {
        if (dolzina % 3 == 1)
        {
            return;
        }
        for(int i = 0; i < zap; i++){
            if(strcmp(ID[i], id) == 0){
                return;
            }
        }
        strcpy(ID[zap], id);
        zap++;
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
    while (samos >= samostal){
        samostal++;
    }
        for (samostal; samostal < s; samostal++){
            printf("%d\n", glag);
            for(glag; glag < g; glag++){
            if (dolzina == 0){
                    for (samos = 0; samos < s - 1; samos++){
                    strcpy(besede[dolzina], samostalniki[samos][0]);
                    strcpy(besede[dolzina + 1], glagoli[glag]);
                    strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                    izpisi(samostalniki, glagoli, s, g, m, besede, samos + 1, glag + 1, samostal + 1, dolzina + 3, maxdolzina, id+samos+glag+samostal);

                    if (m != 0){
                        strcpy(besede[dolzina + 1], ", ki");
                        strcpy(besede[dolzina + 2], glagoli[glag]);
                        strcpy(besede[dolzina + 3], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli, s, g, m - 1, besede, samos + 1, glag + 1, samostal + 1, dolzina + 4, maxdolzina, id+'k'+glag+samostal);
                    }
                }
            }
            else{
                if (dolzina % 3 == 1 && strcmp(besede[dolzina - 3], ",") != 0){
                    strcpy(besede[dolzina], ",");
                    strcpy(besede[dolzina + 1], glagoli[glag]);
                    strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                    izpisi(samostalniki, glagoli, s, g, m, besede, samos, glag + 1, samostal + 1, dolzina + 3, maxdolzina , id+','+glag+samostal);

                    if (m != 0){
                        strcpy(besede[dolzina], ", ki");
                        strcpy(besede[dolzina + 1], glagoli[glag]);
                        strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli, s, g, m - 1, besede, samos, glag + 1, samostal + 1, dolzina + 3, maxdolzina , id+'k'+glag+samostal);
                    }
                }
                else{
                    izpisi(samostalniki, glagoli, s, g, m, besede, samos, glag, samostal, dolzina, dolzina, id);
                    if (m != 0){
                        strcpy(besede[dolzina], ", ki");
                        strcpy(besede[dolzina + 1], glagoli[glag]);
                        strcpy(besede[dolzina + 2], samostalniki[samostal][1]);
                        izpisi(samostalniki, glagoli, s, g, m - 1, besede, samos, glag + 1, samostal + 1, dolzina + 3, maxdolzina , id+'k'+glag+samostal);
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
    izpisi(samostalniki, glagoli, s, g, m, besede, 0, 0, 1, 0, maxdolzina, "");
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