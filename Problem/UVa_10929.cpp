#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    while (scanf("%s", s) && strcmp(s, "0") != 0) {
        int odd_sum = 0;
        int even_sum = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            int digit = s[i] - '0';
            
            if (i % 2 == 0) {
                odd_sum += digit;
            } else {
                even_sum += digit;
            }
        }

        int diff = odd_sum - even_sum;
        if (diff < 0) diff = -diff;

        if(diff%11==0){
            printf("%s is a multiple of 11.\n",s);
        }else{
            printf("%s is not a multiple of 11.\n",s);
        }
    }
}