#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;


    while (scanf("%d", &n) == 1) {
        int a[n + 1];
        for (int i = 0; i <= n; i++)
            a[i] = 0;


        int a1, a2;
        scanf("%d", &a1);
        int t = 0;


        for (int i = 1; i < n; i++) {
            scanf("%d", &a2);
            int b = abs(a1 - a2);
            if (b >= 1 && b < n && a[b] == 0) {
                a[b] = 1;
                t++;
            }
            a1 = a2;
        }


        if (t == n - 1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }


    return 0;
}
