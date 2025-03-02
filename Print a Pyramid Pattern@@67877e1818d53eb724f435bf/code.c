#include<stdio.h>
int main()
{
   int N,r,c,P;
   scanf("%d",&N);
   for(r=0;r<=N;r+=2)
   {
    for(P=0;P<=r;P++)
    {
        printf("");
    }
    for(c=0;c<=r;c++)
    {
        printf("*");
    }
    printf("\n");
   }
}
