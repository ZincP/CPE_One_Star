#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int k=0;k<T;k++){
        int N;
        int P;
        int p[100];
        int day=0;
        scanf("%d %d",&N,&P);
        for(int j=0;j<P;j++){
                scanf("%d",&p[j]);
            }
        for(int i=1;i<=N;i++){
            if(i%7==0||i%7==6){
                continue;
            }
            for(int j=0;j<P;j++){
                if(i%p[j]==0){
                    day++;
                    break;
                }
            }
        }
        printf("%d\n",day);
    }
}