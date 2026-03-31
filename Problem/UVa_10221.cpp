#include<stdio.h>
#include<math.h>
#include<string.h>


int main(){
    double s,a;
    char mindeg[6];
    const double PI = acos(-1.0);
    const double EARTH = 6440.0;

    while(scanf("%lf %lf %s",&s,&a,mindeg)!=EOF){
        if(strcmp(mindeg,"min")==0){a=a/60;}
        if (a > 180) a = 360 - a;
        printf("%.6lf %.6lf\n",(EARTH+s)*2*PI*a/360,sqrt((EARTH+s)*(EARTH+s)*2-2*(EARTH+s)*(EARTH+s)*cos(a*PI/180)));
    }    
}