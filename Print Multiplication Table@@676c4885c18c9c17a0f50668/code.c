#include<stdio.h>
int main()
{
    int N,i,res;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        res=N*i;
        printf("%d*%i=%d",N,i,res);
    }
}