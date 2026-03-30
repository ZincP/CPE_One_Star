#include <stdio.h>

int main() {
    int n;
    int N;
    long long int M[150][150]={0};
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        int test=0;
        scanf(" N = %d",&N);
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                scanf("%lld",&M[i][j]);
            }
        }
        for(int i=0;i<N;i++){
            if(test!=0){break;}
            for(int j=0;j<N;j++){
                if (M[i][j] < 0 || M[i][j] != M[N - 1 - i][N - 1 - j]){test++;break;}
            }
        }
        printf("Test #%d: ",k+1);
        if(test!=0){printf("Non-symmetric.\n");}else{printf("Symmetric.\n");}
    }
}