#iclude<stdio.h>
void fibonacciseries(int);

void fibonacciseries(int n)
{
    int a=0,b=1,i,c;
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
