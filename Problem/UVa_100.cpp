#include <stdio.h>
#include <stdlib.h>


int m,n;
int main(){
    while((scanf("%d %d", &m, &n))!=EOF){
        int m0=m;
        int n0=n;
        int kmax=0;
        int max;
        if (m>n){
            int temp=m;
            m=n;
            n=temp;
        }
        while(m<=n){
            int mm=m;
            int k=1;
            while(mm!=1){
                if (mm%2==0){
                    mm=mm/2;
                }else{
                    mm=mm*3+1;
                }
                k=k+1;
            }
            if(k>kmax){
                kmax=k;
                max=m;
            }
            m=m+1;
        }
        printf("%d %d %d\n",m0,n0,kmax);
    }
}
