#include<stdio.h>
int main()
{
    float radius,area;
    scanf("%f%f",&radius,&area);
    area=3.14 * radius *radius;
    printf("Area: %.2f",area);
}