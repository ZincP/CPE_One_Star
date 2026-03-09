#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char keyboard[4][20] = {
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"
    };

    char talk[1000];

    while (fgets(talk, sizeof(talk), stdin)) {
        int len = strlen(talk);

        for (int i = 0; i < len; i++) {
            if (talk[i] == '\n' || talk[i] == '\r') continue;
            if (talk[i] == ' ') {
                putchar(' ');
                continue;
            }
            char current = tolower(talk[i]);
            int found = 0;

            for (int k = 0; k < 4; k++) {
                for (int j = 0; j < (int)strlen(keyboard[k]); j++) {
                    if (keyboard[k][j] == current) {
                        if (j >= 2) {
                            putchar(keyboard[k][j - 2]);
                        }
                        found = 1;
                        break;
                    }
                }
                if (found) break;
            }
        }
        putchar('\n');
    }

    return 0;
}