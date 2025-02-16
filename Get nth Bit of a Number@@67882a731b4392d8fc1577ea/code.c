#include<stdio.h>
int main()
{
    int num,position=0;
    scanf("%d",&num);
    while(num>1)
    {
       if(num%2==1)
       printf("1");
       else
       printf("0");
    }
}