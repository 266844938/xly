#include<stdio.h>
int main (void)
{
  int y;
  printf("Enter y:\n");
  scanf("%d",&y);
  if((((y%4)==0)&&((y%400)!=0))||((y%400)==0)){
    printf("Yes\n") ;
  }else{
      printf("No\n");
  }
  return 0;







}