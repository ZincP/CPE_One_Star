#include <stdio.h>


int main(){
    int count=1;
    char c;
    while(scanf("%c", &c)!=EOF){
        if(c=='"'){
            if(count%2!=0) printf("``");
            else printf("''");
            count++;
        }
        else printf("%c", c);
    }
}
