#include<stdio.h>
int main(){
    long long int i;
    long long int n;
    int k[1000];
    int kcnt;
    while(1){
        kcnt=0;
        n=0;
        scanf("%lld",&i);
        if(i==0){break;}
        while(1){
            if(i%2==1){n++;k[kcnt]=1;kcnt++;}else{k[kcnt]=0;kcnt++;}
            i=i/2;
            if(i==0){break;}
        }
        printf("The parity of ");
        for(int a=kcnt-1;a>=0;a--){printf("%d",k[a]);}
        printf(" is %lld (mod 2).\n",n);
    }
}