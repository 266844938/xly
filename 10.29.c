#include<stdio.h>
int main (void)
{
    int a=60,b=20,c=30,d=40,sum;
    float ave;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    printf("Enter d:\n");
    scanf("%d",&d);
    sum=a+b+c+d;
    ave=sum/4.0;
    printf("sum is %d,ave is %.1f\n",sum,ave);
    return 0;
} 
