#include<stdio.h>
int main()
{
    int num,position=0;
    scanf("%d",&num);
    while(num>1)
    {
        num>>=1;
        position++;
    } 
    return position;
    if(position==1)
    printf("SET");
    else
    printf("Not Set");
}