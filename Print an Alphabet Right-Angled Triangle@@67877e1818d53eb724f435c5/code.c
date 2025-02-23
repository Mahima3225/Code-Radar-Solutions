#include<stdio.h>
int main()
{
    int N,r,c;
    scanf("%d",&N);
    for(r='A';r<=N;r++)
    {
        for(c='A';c<=r;c++)
        printf("%c",c);
    }
    printf("\n");
}