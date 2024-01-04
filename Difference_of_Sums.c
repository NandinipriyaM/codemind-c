#include<stdio.h>
int main()
{
    int a,n,sq,sum,diff;
    scanf("%d",&n);
    a=n*(n+1)/2;
    sq=n*(n+1)*(2*n+1)/6;
    sum=a*a;
    diff=sum-sq;
    printf("%d",diff);
}