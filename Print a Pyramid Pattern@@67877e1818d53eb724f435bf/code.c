#include<stdio.h>
int main()
{
    int N,r=1,c,SP=3,P;
    scanf("%d",&N);
    for(r=1;r<=N;r+=2)
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
        SP=SP-1;
    }
    return 0;
}