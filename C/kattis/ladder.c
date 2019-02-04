#include <stdio.h>
#include <math.h>
//gcc -g -Wall -o ladder ladder.c -lm

int main() {
        int height;
        int angle;
        scanf("%d", &height);
        scanf("%d", &angle);
        double angleRadians = angle * M_PI / 180.0f;
        //printf("%lf = sin(angle)", sin(angleradians));
        int result = height / sin(angleRadians) + 1;
        printf("%d\n", result);
        return 0;
}
