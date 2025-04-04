#iclude<stdio.h>
void fibonacciseries(int);
void fibonacciseries(int n)
{
    if(n==0||n==1)
    return n-1;
    else
    return fibonacciseries(n-1)*n;
}
