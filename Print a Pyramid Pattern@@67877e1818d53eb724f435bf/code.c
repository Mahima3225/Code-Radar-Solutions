#include<stdio.h>
int main()
{
    int N,r,c,SP=3,P;
    scanf("%d",&N);
    for(r=0;r<=N;r+=3)
    {
        for(P=0;P<=SP;P++)
        {
            printf("");
        }
        for(c=0;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
        SP=SP-1;
    }
}