#include <stdio.h>


int main() {
    int xmax, ymax;
    int scent[51][51] = {0};
   
    if (scanf("%d %d", &xmax, &ymax) == EOF) return 0;


    int x, y;
    char direction;
    while (scanf("%d %d %c", &x, &y, &direction) != EOF) {
        char commands[105];
        scanf("%s", commands);


        int lost = 0;
        for (int i = 0; commands[i] != '\0'; i++) {
            char DO = commands[i];
            int nextX = x, nextY = y;


            if (DO == 'F') {
                if (direction == 'E') nextX++;
                else if (direction == 'W') nextX--;
                else if (direction == 'N') nextY++;
                else if (direction == 'S') nextY--;


                if (nextX < 0 || nextX > xmax || nextY < 0 || nextY > ymax) {
                    if (scent[x][y] == 0) {
                        scent[x][y] = 1;
                        lost = 1;
                        break;
                    }
                } else {
                    x = nextX;
                    y = nextY;
                }
            } else if (DO == 'R') {
                if (direction == 'E') direction = 'S';
                else if (direction == 'S') direction = 'W';
                else if (direction == 'W') direction = 'N';
                else if (direction == 'N') direction = 'E';
            } else if (DO == 'L') {
                if (direction == 'E') direction = 'N';
                else if (direction == 'N') direction = 'W';
                else if (direction == 'W') direction = 'S';
                else if (direction == 'S') direction = 'E';
            }
        }


        if (lost) {
            printf("%d %d %c LOST\n", x, y, direction);
        } else {
            printf("%d %d %c\n", x, y, direction);
        }
    }
    return 0;
}
