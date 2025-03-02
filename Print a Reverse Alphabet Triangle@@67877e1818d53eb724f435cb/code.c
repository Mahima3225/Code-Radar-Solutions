#include<stdio.h>
int main()
{
    int N,r,c;
    scanf("%d",&N);
    for(r=N;r>=1;r--)
    {    
        int ascii=65;
        for(c=1;c<=r;c++)
        {   
            int a=ascii-c+1;
            char ch=(char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }
}