#include<stdio.h>
int main()
{
    int num,position;
    scanf("%d",&num);
    while(num>1)
    {
        num>>1;
        position++;
    }
    if(num%2==1);
    printf("SET");
    else
    printf("Not Set");
}