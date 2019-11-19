#include <stdio.h>

int main (void)
{
    int time,distance;
    printf("Enter time :\n");
    scanf("%d",&time);
    distance=1.0/2*10*time*time;
    printf("Distance is %d\n",distance);
    return 0;
}
