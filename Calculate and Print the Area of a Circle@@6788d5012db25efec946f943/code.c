#include<stdio.h>
int main()
{
    int radius,area;
    scanf("%d%f",&radius,&area);
    area=3.14 * radius *radius;
    printf("Area: %.2f",area);
}