#include<stdio.h>
int main()
{
    int n1,n2;
    char Operator;
    scanf("%d%d",&n1,&n2);
    scanf("%c",&Operator);
    switch(Operator)
    {
        case '+':printf(n1+n2);break;
        case '-':printf(n1-n2);break;
        case '*':printf(n1*n2);break;
        case '/':printf(n1/n2);break;
        default:printf("error");
    }
}