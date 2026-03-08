#include <stdio.h>


int count_ones(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count;
}


int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
       
        int b1 = count_ones(N);
       
        int b2 = 0;
        int temp = N;
        while (temp > 0) {
            int digit = temp % 10;
            b2 += count_ones(digit);
            temp /= 10;
        }
       
        printf("%d %d\n", b1, b2);
    }
}
