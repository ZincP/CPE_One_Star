#include <stdio.h>

int main(){
    int k;
    int t,e;
    while(scanf("%d",&k)!=EOF){
        t=k;e=k;
        for (; e >= 3;) {
            int k = e / 3;
            t += k;
            e = k + (e % 3);
        }

        if (e == 2) {
            t++;
        }
        printf("%d\n",t);

    }
}
