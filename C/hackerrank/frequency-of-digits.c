#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    scanf("%s", &str);
    int arr[10];
    memset(arr, 0, sizeof(arr));
    int i;
    for (i=0; str[i] != '\0'; i++){
        if (str[i] >= '0' && str[i] <= '9') {
            arr[str[i] - '0']++;
        }
    }
    for (i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
