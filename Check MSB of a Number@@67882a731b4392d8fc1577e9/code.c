#include<stdio.h>
int main()
{    
    int num,position=31,shifting;
    scanf("%d",&num);
    for(i=0;i<position;i++)
    {
        shifting=1<<position;
    }
    if(num&shifting)
    printf("Set");
    else
    printf("Not Set");
}