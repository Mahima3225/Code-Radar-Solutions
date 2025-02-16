#include<stdio.h>
int main()
{
    int n1,n2;
    char operator;
    scanf("%d%d",&n1,&n2);
    scanf("%c",&operator);
    switch(operator)
    {
        case '+':printf("%d%d",n1+n2);break;
        case '-':printf("%d%d",n1-n2);break;
        case '*':printf("%d%d":n1*n2);break;
        case '/':printf("%d%d":n1/n2);break;
        default:printf("error");
    }
}