#include<stdio.h>
int main()
{    
    int num;
    scanf("%d",&num);
    int shifting=1<<31;
    if(num&shifting)
    printf("SET");
    else
    printf("Not Set");
}