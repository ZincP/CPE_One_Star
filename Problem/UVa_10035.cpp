#include <stdio.h>


int main(){
    long long int m,n;
    while(scanf("%lld %lld", &m, &n) == 2 && (m != 0 || n != 0)){
        int M[15]={0},N[15]={0};
        int k=0;
        while(1){
            M[k]=m%10;
            m=(m-M[k])/10;
            k++;
            if (m<=0) break;
        }
        int kk=0;
        while(1){
            N[kk]=n%10;
            n=(n-N[kk])/10;            
            kk++;
            if (n<=0) break;
        }
        int max;
        if (k<kk) max=kk;
        else max=k;
        int count=0;
        int carry=0;
        for(int i=0;i<max;i++){
            if(M[i]+N[i]+carry>=10){
                count++;
                carry=1;
            }
            else carry=0;
        }
        if(count==0) printf("No carry operation.\n");
        else if(count==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);
    }
}
