#include<stdio.h>
int main()
{
    int N,r,c;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        int ascii=65;
        for(int j=0;j<=i;j++){
            int a=ascii+j;
            char ch=(char)a;
            printf("%c",ch);
        }
        printf("\n");
    }
}