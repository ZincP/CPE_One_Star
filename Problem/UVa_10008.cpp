#include <stdio.h>
#include <string.h>


int main() {
    int n, i, j, a;
    int l = 0;
    int code[26] = {0};
    char w[1000];


    if (scanf("%d", &n) != 1) return 0;
   
    getchar();


    for (i = 0; i < n; i++) {
        if (fgets(w, sizeof(w), stdin) == NULL) break;
       
        for (j = 0; w[j] != '\0'; j++) {
            a = -1;
           
            if (w[j] >= 'a' && w[j] <= 'z')
                a = w[j] - 'a';
            else if (w[j] >= 'A' && w[j] <= 'Z')
                a = w[j] - 'A';
           
            if (a != -1) {
                l++;
                code[a]++;
            }
        }
    }


    for (j = l; j >= 1; j--) {
        for (i = 0; i < 26; i++) {
            if (code[i] == j) {
                printf("%c %d\n", (char)(i + 'A'), code[i]);
            }
        }
    }


    return 0;
}
