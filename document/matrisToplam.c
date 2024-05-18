#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
	int i, j;
	int A[2][3], B[2][3], TOPLAM[2][3];
	srand(time(NULL));
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			A[i][j] = rand()%5 + 1;
			printf("%d ", A[i][j]);
			B[i][j] = rand()%5 + 1;
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			TOPLAM[i][j] = A[i][j] + B[i][j];
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", TOPLAM[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
