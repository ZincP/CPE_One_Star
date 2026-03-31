#include <stdio.h>
#include <math.h>
#include <stdbool.h>

long reverse(long num) {
    long reverse = 0;
    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}

bool isPrime(long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    long num;
    while(scanf("%ld",&num)!=EOF){
        if (isPrime(num)){
            if(isPrime(reverse(num)) && reverse(num)!=num){printf("%ld is emirp.\n", num);
            }else{
                printf("%ld is prime.\n", num);
            }
        }else{
            printf("%ld is not prime.\n", num);
        }
    }
}