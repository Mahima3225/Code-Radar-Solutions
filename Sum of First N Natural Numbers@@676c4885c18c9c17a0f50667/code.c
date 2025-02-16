#include<stdio.h>
int main()
{
    int i,N,sum;
    scanf("%d",&N);
    i=1;
    while(i<=N)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
}