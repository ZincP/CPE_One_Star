#include<stdio.h>

//'kuti' (10000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100)

void bangla(long long n) {
    if (n >= 10000000) {
        bangla(n / 10000000);
        printf(" kuti");
        n %= 10000000;
    }
    
    if (n >= 100000) {
        printf(" %lld lakh", n / 100000);
        n %= 100000;
    }
    
    if (n >= 1000) {
        printf(" %lld hajar", n / 1000);
        n %= 1000;
    }
    
    if (n >= 100) {
        printf(" %lld shata", n / 100);
        n %= 100;
    }
    
    if (n > 0) {
        printf(" %lld", n);
    }
}

int main() {
    long long n;
    int t = 1;

    while (scanf("%lld", &n) != EOF) {
        printf("%4d.", t++);
        
        if (n == 0) {
            printf(" 0");
        } else {
            bangla(n);
        }
        
        printf("\n");
    }
}