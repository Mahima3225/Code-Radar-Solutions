#include<stdio.h>
int main()
{
    int radius,
    float area;
    scanf("%d%f",&radius,&area);
    area=3.14*radius*radius;
    printf("Area: %.2f",area);
}