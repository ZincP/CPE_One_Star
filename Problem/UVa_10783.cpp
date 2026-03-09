#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int a,b;
        
        scanf("%d %d",&a,&b);
        if (a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0){a=a+1;}
        if(b%2==0){b=b-1;}

        printf("Case %d: %d\n",i+1,((a+b)/2)*((b-a)/2+1));
    }
}