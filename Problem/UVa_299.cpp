#include <stdio.h>


int main(){
    int times;
    int count=0;
    scanf("%d", &times);
    for(;times>0;times--){
        int L;
        scanf("%d", &L);
        int train[55];
        for(int i=0;i<L;i++){
            scanf("%d", &train[i]);
        }
        for(int i=0;i<L-1;i++){
            for(int j=0;j<L-1-i;j++){
                if(train[j]>train[j+1]){
                    int temp = train[j];
                    train[j] = train[j+1];
                    train[j+1] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
        count = 0;
    }
}
