#include<stdio.h>
int main()
{
    int N,r,c,k=1;
    scanf("%d",&N);
    for(r=1;r<=N;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}