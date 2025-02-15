#include<stdio.h>
int main()
{
    int a,b,c,average;
    scanf("%d%d%d%f",&a,&b,&c,&average);
    average=(a+b+c)/3;
    printf("Average: %.2f",average);
}