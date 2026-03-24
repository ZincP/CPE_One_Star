#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    int ii=0;
    char country[3000][500];
    int c[3000]={0};
    int b;
    if (scanf("%d", &n) != 1) return 0;
    getchar();
    for(int i=0;i<n;i++){
        char str[500];
        if (fgets(str, sizeof(str), stdin) == NULL) break;
        char *strr = strtok(str, " \n\r\t");
        if (strr == NULL) continue;
        b=0;
        for(int j=0;j<ii;j++){
            if (strcmp(strr,country[j])== 0){
                c[j]++;
                b++;
                break;
            }
        }
        if(b==0){strcpy(country[ii],strr);c[ii]++;ii++;}
    }
    for (int i = 0; i < ii - 1; i++) {
        for (int j = 0; j < ii - i - 1; j++) {
            if (strcmp(country[j], country[j+1]) > 0) {
                char tempName[500];
                strcpy(tempName, country[j]);
                strcpy(country[j], country[j+1]);
                strcpy(country[j+1], tempName);

                int tempCount = c[j];
                c[j] = c[j+1];
                c[j+1] = tempCount;
            }
        }
    }
    for(int k=0;k<ii;k++){
        printf("%s %d\n",country[k],c[k]);
    }
}