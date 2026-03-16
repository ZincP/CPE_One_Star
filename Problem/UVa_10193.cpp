#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int toDec(char *s) {
    int res = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        res = res * 2 + (s[i] - '0');
    }
    return res;
}

int main() {
    int N;
    char s1[35], s2[35];

    if (scanf("%d", &N) != 1) return 0;

    for (int i = 1; i <= N; i++) {
        scanf("%s %s", s1, s2);
        
        int n1 = toDec(s1);
        int n2 = toDec(s2);

        printf("Pair #%d: ", i);
        if (gcd(n1, n2) > 1) {
            printf("All you need is love!\n");
        } else {
            printf("Love is not all you need!\n");
        }
    }
}