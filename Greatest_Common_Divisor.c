#include<stdio.h>
int main()
{
    int i,n,m,gcd;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m && i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}