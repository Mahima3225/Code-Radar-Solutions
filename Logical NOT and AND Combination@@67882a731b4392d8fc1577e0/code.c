#include<stdio.h>
int man()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(!(a&&b>0))
    printf("True");
    else
    printf("False");
}