#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int z=a+b;
    if(z>=11)
    {
        printf("%d",21-z);
    }
    else 
    {
        printf("-1");
    }
}