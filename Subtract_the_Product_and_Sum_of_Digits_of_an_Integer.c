#include<stdio.h>
int main()
{
    int i,n,p=1,s=0,r,t;
    i=n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
        t=p-s;
    }
    printf("%d",t);
}
