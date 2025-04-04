#iclude<stdio.h>
void fibonacciseries(int);
void fibonacciseries(int n)
{
    if(n==0||n==1)
    return n-1;
    else
    return fibonacci(n-1)*n;
}
