#include<stdio.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    int Z=M*K;
    if(N<=Z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}