#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=a+b;
    int y=b+c;
    int z=c+a;
    if(a<b && a<c)
    {
        printf("%d",y);
    }
    else if(b<c && b<a)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d",x);
    }
    
}