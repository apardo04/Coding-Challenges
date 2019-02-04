#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//gcc -g -Wall -o printing_pattern printing_pattern.c -lm

// My brute force, non-elegant solution
int main() 
{
    int n;
    scanf("%d", &n);
  	for (int i = n; i > 0; i--) {
        for (int m = n; m > i; m--) {
            printf("%d ",m);
        }
        for (int j = i * 2 - 1; j > 0; j--) {
            printf("%d ", i);
        }
        for (int m = i + 1; m <= n; m++) {
            printf("%d ",m);
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int m = n; m > i; m--) {
            printf("%d ",m);
        }
        for (int j = i * 2 - 1; j > 0; j--) {
            printf("%d ", i);
        }
        for (int m = i + 1; m <= n; m++) {
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}

