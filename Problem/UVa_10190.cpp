#include <stdio.h>

int main() {
    long long int n, m;
    
    while (scanf("%lld %lld", &n, &m) != EOF) {
        if (n < 2 || m < 2 || n < m) {
            printf("Boring!\n");
            continue;
        }

        long long int seq[100]; 
        int cnt = 0;
        long long int temp = n;
        bool is_boring = false;

        while (temp > 1) {
            if (temp % m != 0) {
                is_boring = true;
                break;
            }
            seq[cnt++] = temp;
            temp /= m;
        }

        if (is_boring) {
            printf("Boring!\n");
        } else {
            for (int i = 0; i < cnt; i++) {
                printf("%lld ", seq[i]);
            }
            printf("1\n");
        }
    }
    return 0;
}