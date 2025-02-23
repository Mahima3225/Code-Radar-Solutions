#include<stdio.h>
int main()
{    
    int num,shifting,i;
    int position=31;
    scanf("%d",&num);
    for(i=0;i<position;i++)
    {
        shifting=0<<position;
    }
    if(num||shifting)
    printf("Set");
    else
    printf("Not Set");
}