#include <stdio.h>
#include <string.h>


int main (){
    char str[100][100];
    int max_length=0;
    int row=0;


   
    while (fgets(str[row], sizeof(str[row]), stdin) != NULL){
        row++;    
    }
    for (int i = 0; i < row; i++){
        if (strlen(str[i]) > max_length){
            max_length = strlen(str[i]);
        }
    }
    for(int i=0 ; i<row ; i++){
        int len = strlen(str[i]);
   
        for (int j = 0; j < max_length; j++)
        if (j > len){
            str[i][j] = ' ';
        }
    }
    for (int i = 0; i < max_length; i++) {
        for (int j = row - 1; j >= 0; j--) {
            printf("%c", str[j][i]);
        }
        printf("\n");
    }
}
