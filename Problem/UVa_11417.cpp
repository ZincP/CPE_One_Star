#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    while(1){
        int N;
        scanf("%d",&N);
        if(N==0){break;}
        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=gcd(i,j);
            }
        }
        printf("%d\n",G);
    }
}