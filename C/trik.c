#include <stdio.h>
#include <string.h>

int main() {
        char str[50];
        int pos[] = {1,2,3};
        scanf("%s", str);
        int i;
        for (i = 0; i < strlen(str); i++) {
                if (str[i] == 'A') {
                        int temp = pos[0];
                        pos[0] = pos[1];
                        pos[1] = temp;
                }
                else if (str[i] == 'B') {
                        int temp = pos[1];
                        pos[1] = pos[2];
                        pos[2] = temp;
                }
                else if (str[i] == 'C') {
                        int temp = pos[0];
                        pos[0] = pos[2];
                        pos[2] = temp;
                }
        }
        int j;
        for (j = 0; j < 3; j++) {
                if (pos[j] == 1) {
                        break;
                }
        }
        printf("%d\n", j+ 1);
        return 0;
}
