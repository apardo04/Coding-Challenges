#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int SIZE;
    scanf("%d", &SIZE);
    int arr[SIZE];
    int sum = 0;
    int i;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
