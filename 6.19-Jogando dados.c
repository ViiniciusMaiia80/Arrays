#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LANCE 36000

int main(void){
	srand(time(NULL));

	int d1, d2, result, frequencia[13]={0};
	
	for(int i = 0; i < LANCE; i++){
		d1 = 1+rand()%6;
		d2 = 1+rand()%6;
		result = d1+d2;
		frequencia[result]++;
	}

	printf("Frequencia de resultados:\n ");

	for(int i = 2; i < 13; i++){
		printf("%d - %d\n", i, frequencia[i]);
	}

	


	return 0;
}