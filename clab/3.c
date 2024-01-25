#include<stdio.h>
int main()
{
    int x;
    double r;
    float k;
    float m;
    
    float w,d;
    printf("enter no of days x=\n");
    scanf("%d",&x);
    r=x/365;
    k=x/30;
    printf("no of years is %lf\n",r);
    printf("no of months is %f\n",k);
    w=k/4;
   printf("no of weeks is %f\n",w);
    printf("no of days is %d",x);
    return 0;
}