#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int z=x/10;
    if(x%10==0)
    {
        printf("%d",z);
    }
    else if(x%5==0)
    {
        printf("%d",z+1);
    }
    else 
    {
        printf("-1");
    }
}