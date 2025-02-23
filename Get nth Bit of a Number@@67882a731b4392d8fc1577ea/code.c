#include<stdio.h>
int main()
{
    int num,position;
    scanf("%d",&num);
    for(i=0;i<=position;i++)
    {
        value=(num>>position)&1;
    }
    if(num&value)
    printf("%d",value);

}