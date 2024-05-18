#include <stdio.h>
#include <math.h>

int function(int x){
	return pow(x,2) + 4*x + 4;
}

int main() {
	int a = 1, b = 5, i;
	float integral = 0;
	
	for (i = a; i < b; i++){
		integral += ((float)function(i) + (float)function(i + 1)) * 0.5;
		printf("func(%d): %d, integral %.2f \n", i, function(i), integral);
	}
	return 0;
}
