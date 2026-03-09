#include<stdio.h>

int main(){
    while(1){
        long int k;
        scanf("%ld",&k);
        if(k==0){break;}
        k=k%9;
        if(k==0){k=9;}
        printf("%ld\n",k);
    }
}