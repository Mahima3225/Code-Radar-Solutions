#include<stdio.h>
int main()
{
    int N,r,c;
    scanf("%d",&N);
    for(r=N;r<='A';r--)
    {
        for(c='A';c<=r;c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}