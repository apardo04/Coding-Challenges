#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    // MAYBE FILL AN ARRAY
  	for (int i = n; i > 0; i--) {
        for (int j = i * 2 - 1; j > 0; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

