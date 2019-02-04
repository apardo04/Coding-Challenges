#include <stdio.h>

int main() {
        int a;
        int b;
        scanf("%d", &a);
        scanf("%d", &b);
        int result = (a * (b - .99)) + 1;
        printf("%d\n", result);
        return 0;
}
