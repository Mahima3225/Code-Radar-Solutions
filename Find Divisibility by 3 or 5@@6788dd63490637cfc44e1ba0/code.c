#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%3==0||num%5==0||num%3&&num%5==0||num%3&&num%5!=0)
    printf("Divisible by 3","Divisible by 5","Divisible by Both","Not Divisible");
}