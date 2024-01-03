#include<stdio.h>
int main()
{
    int i,n,r,s,sum=0;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
        sum=s+r;
    }
    printf("%d",sum);
}