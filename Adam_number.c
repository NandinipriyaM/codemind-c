#include<stdio.h>
int main()
{
    int n,r,res=0,s,p,a,b=0;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    p=res*res;
   while(p!=0)
   {
      a=p%10;
      b=b*10+a;
      p=p/10;
   }
    if(s==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}