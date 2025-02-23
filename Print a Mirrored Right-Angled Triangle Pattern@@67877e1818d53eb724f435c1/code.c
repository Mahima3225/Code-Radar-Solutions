#include<stdio.h>
int main()
{
    int N,r,c,SP=N,P;
    scanf("%d",&N);
    for(r=1;r<=N;r++)
    {
        for(P=1;P<=N-r;P++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}