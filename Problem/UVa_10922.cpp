#include <stdio.h>
#include <string.h>


char x[1111];
int main () {
    while (1) {
        scanf("%1110s", x);
        if (strcmp(x, "0") == 0) break;  
        int degree = 0;
        int sum;
        char temp[1111];
        strcpy(temp, x);
        while (1) {
            sum = 0;
            for (int i = 0; temp[i] != '\0'; i++) {
                sum = sum + temp[i] - '0';
            }
            degree++;
            if (sum == 9) break;
            if (sum % 9 != 0) break;
            sprintf(temp, "%d", sum);
        }
        if (sum==9) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", x, degree);
        }
        else {
            printf("%s is not a multiple of 9.\n", x);
        }
    }
}
