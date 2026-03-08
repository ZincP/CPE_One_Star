#include <stdio.h>


int main() {
    int i, j;
    int n, a;
    int f[40] = {0, 1};


    for (i = 2; i < 40; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }


    if (scanf("%d", &n) != 1) return 0;


    for (i = 0; i < n; i++) {
        if (scanf("%d", &a) != 1) break;


        printf("%d = ", a);


        int check = 0;
        int base[41] = {0};


        for (j = 39; j >= 2; j--) {
            if (a - f[j] >= 0) {
                if (base[j + 1] != 1) {
                    base[j] = 1;
                    a = a - f[j];
                    check = 1;
                }
            }


            if (check == 1) {
                printf("%d", base[j]);
            }
        }


        printf(" (fib)\n");
    }
}
