#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int a,b;
        int s,d; //s=a+b, d=a-b
        scanf("%d %d",&s,&d);
        if (s < d || (s + d) % 2 != 0){printf("impossible\n");continue;}
        a=(s+d)/2;
        b=s-a;
        if(a>=0 && b>=0){printf("%d %d\n",a,b);}else{printf("impossible\n");}
    }
}