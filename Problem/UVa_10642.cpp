#include <stdio.h>

int main()
{
	//0,0 | 0,1  1,0 | 0,2  1,1,  2,0 | 0,3  1,2  2,1  3,0 | ...
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		int a,b,c,d;
		int cnt=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int ab=a+b;
		int cd=c+d;
		while(ab<cd){
		    cnt=cnt+ab+1;
		    ab++;
		}
		cnt=cnt-a+c;
		printf("Case %d: %d\n",i+1,cnt);
	}
}