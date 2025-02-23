#include<stdio.h>
int main()
{    
    int num;
    scanf("%d",&num);
    int shifting=1<<31;
    if(num&shifting)
    printf("Set");
    else
    printf("Not Set");
}