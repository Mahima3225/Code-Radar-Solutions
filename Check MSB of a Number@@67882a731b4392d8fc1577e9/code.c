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
    num%2==1;
    return position;
}