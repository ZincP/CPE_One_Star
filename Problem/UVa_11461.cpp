#include <stdio.h>

int main(){
    int a,b;
    int cnt;
    while(1){
        cnt=0;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0){break;}
        for (int i = 1; i * i <= b; i++) {
            if (i * i >= a) {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}