#include<stdio.h>
int main()
{
    int N,i,res;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        res=N*i;
        printf("%d x %i = %d\n",N,i,res);
    }
}