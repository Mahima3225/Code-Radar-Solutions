#include<stdio.h>
int main()
{
    int N,r=1,c,SP=3,P;
    scanf("%d",&N);
    if(N==1)
    {printf("*\n");}
    else
    {for(r=0;r<=N;r+=2)
    {
        for(P=0;P<=SP;P++)
        {
            printf(" ");
        }
        for(c=0;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
        SP=SP-1;
    }
    }
    return 0;
}