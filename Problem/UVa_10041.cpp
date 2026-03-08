#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, x, temp;


    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int r[555];
        int rr[555];
        scanf("%d", &x);
        int xx = 0;
        while (xx < x) {
            scanf("%d", &r[xx]);
            xx++;
        }


        for (int i = 0; i < x - 1; i++) {
            for (int j = 0; j < x - i - 1; j++) {
                if (r[j] > r[j + 1]) {
                    temp = r[j];
                    r[j] = r[j + 1];
                    r[j + 1] = temp;
                }
            }
        }
       


        int r0 = r[x/2];
        for (int j = 0; j < x; j++) {
            rr[j] = r[j] - r0;
            if (rr[j] < 0) {
                rr[j] = -rr[j];
            }
        }


        int rrsum = 0;
        for (int j = 0; j < x; j++) {
            rrsum = rrsum + rr[j];
        }
        printf("%d\n", rrsum);
    }
}
