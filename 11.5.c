#include<stdio.h>
int main (void)
{
   float s,t,m1,m2;
   int y;
   printf("Enter s,t:\n");
   scanf("%f%f",&s,&t);
   if(s<=3){
       m1=10;
   }
  if(s>3&&s<=10){
      m1=10+2*(s-3);
  }
  if(s>10){
      m1=10+7*2+3*(s-10);
  }
  if(t<5){
      m2=0;
  }
   if(t>=5){
       m2=2*t/5;
   }
   printf("y=%d\n",m1+m2);
   return 0;
}