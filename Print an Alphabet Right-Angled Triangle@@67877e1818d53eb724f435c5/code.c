#include<stdio.h>
int main()
{
    char N;
    int r,c;
    scanf("%c",&N);
    for(r='A';r<=N;r++)
    {
        for(c='A';c<=r;c++)
        printf("%c",c);
    }
    printf("\n");
}