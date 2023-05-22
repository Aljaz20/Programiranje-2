#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    char input[n][101];
    char *izhod = malloc(101 * sizeof(char));
    for(int i= 0; i < n; i++){
        scanf("%s", input[i]);
    }
    scanf("%s", izhod);
    FILE *output = fopen(izhod, "w");
    if(output == NULL){
        printf("Napaka pri odpiranju datoteke\n");
        return 1;
    }

    int num;
    int *stevila = NULL;
    int count = 0;

    for(int i = 0; i < n; i++){
        FILE *vhod = fopen(input[i], "r");
        if(vhod == NULL){
            printf("Napaka pri odpiranju datoteke\n");
            return 1;
        }

        while(fscanf(vhod, "%d\n", &num) != EOF){
            stevila = realloc(stevila, (count + 1) * sizeof(int));
            stevila[count] = num;
            count++;
        }
        fclose(vhod);
    }

    qsort(stevila, count, sizeof(int), compare);

    for(int i = 0; i < count; i++){
        fprintf(output, "%d\n", stevila[i]);
    }
    fclose(output);
    free(stevila);

    return 0;
}