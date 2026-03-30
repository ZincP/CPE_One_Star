#include <stdio.h>

int main(){
    long long int a,b;
    long long int k[10000];
    int kcnt;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        kcnt=1;
        k[0]=a;
        int boo=0;
        while(a!=1){
            if(b==0 || b==1 || a%b!=0){
                printf("Boring!\n");
                boo++;
                break;
            }else{
                a=a/b;
                k[kcnt++]=a;
            }
        }
        if(boo==0){
            for(int i=0;i<kcnt-1;i++){printf("%lld ",k[i]);}
            printf("1\n");
        }
    }
}