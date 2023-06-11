#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() 
{
	int k;
	int* tabela = calloc(1000, sizeof(int));
	char a = '1';
	int i = 0;
	scanf("%c", &a);
	for(i = 0; a != ' '; i++){
		tabela[i] = a -'0';
		scanf("%c", &a);
	}
	int prenos = 0;
	scanf("%d", &k);
	for(int j = 0; j < i; j++){
		int temp = (prenos * 10 +tabela[j]) / k;
		prenos = (prenos * 10 +tabela[j]) % k;
		if(j == 0 && temp == 0){
			continue;
		}
		printf("%d", temp);
	}
	printf("\n");    

	return 0; 
} 

