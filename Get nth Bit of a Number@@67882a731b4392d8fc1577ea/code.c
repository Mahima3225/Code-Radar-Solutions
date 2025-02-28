#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf((m>>n)&&1);
    return 0;
}