#include <stdio.h>
#include <string.h>

int main() {
    char sentences[105][105];
    int count = 0;
    int max_length = 0;

//☆*: .｡. o(≧▽≦)o .｡.:*☆

    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            sentences[i][j] = '\0';
        }
    }

    while (fgets(sentences[count], 105, stdin)) {
        int len = strlen(sentences[count]);
        if (sentences[count][len - 1] == '\n') {
            sentences[count][len - 1] = '\0';
            len--;
        }
        if (len > max_length) {
            max_length = len;
        }
        count++;
    }

    for (int i = 0; i < max_length; i++) {
        for (int j = count - 1; j >= 0; j--) {
            if (i < strlen(sentences[j])) {
                putchar(sentences[j][i]);
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
