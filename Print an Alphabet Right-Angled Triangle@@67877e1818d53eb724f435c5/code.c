#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        int ascii=65;
        for(j=1;j<=i;j++)
        {           
            int a=ascii+j;
            char ch=(char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }
}