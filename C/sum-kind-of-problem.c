#include <stdio.h>

int main() {
	int sets, i;
	if (scanf("%d", &sets) == 1);
	
	for(i = 0; i < sets; i++) {
		int k, n;
		if (scanf("%d %d", &k, &n) == 1);
		int sumOfAllPos = n * (n + 1)/2;
		int oddSum =  n * n;
		int evenSum = n *(n + 1);
		printf("%d %d %d %d\n", k, sumOfAllPos, oddSum, evenSum);
	}
	return 0;
}

