#include<stdio.h>

int main(){
    double ax,ay,bx,by,cx,cy,dx,dy;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy)!=EOF){
        //ab,ac,ad,bc,bd,cd
        if(ax==bx && ay==by){
            printf("%.3lf %.3lf\n",cx+dx-ax,cy+dy-ay);
        }else if(ax==cx && ay==cy){
            printf("%.3lf %.3lf\n",bx+dx-ax,by+dy-ay);
        }else if(ax==dx && ay==dy){
            printf("%.3lf %.3lf\n",bx+cx-ax,by+cy-ay);
        }else if(bx==cx && by==cy){
            printf("%.3lf %.3lf\n",ax+dx-bx,ay+dy-by);
        }else if(bx==dx && by==dy){
            printf("%.3lf %.3lf\n",ax+cx-bx,ay+cy-by);
        }else if(cx==dx && cy==dy){
            printf("%.3lf %.3lf\n",ax+bx-cx,ay+by-cy);
        }
    }
}