#include<stdio.h>

int main(){
    long long int a,b;
    long long int k;
    while(scanf("%lld %lld",&a,&b)==2){
        k=a-b;
        if(k<0){k=-k;}
        printf("%lld\n",k);
    }
}