#include<stdio.h>
int main()
{
    int N,r,c,SP=1,P;
    scanf("%d",&N);
    for(r=1;r<=N;r++)
    {
        for(P=1;P<=SP;P++)
        {
            printf("");
        }
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
        SP=SP+1;
    }

}