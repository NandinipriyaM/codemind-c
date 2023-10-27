#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,f1,f2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    f1=X1+Y1;
    f2=X2+Y2;
    if(f1<f2)
    {
        printf("%d",f1);
    }
    else
    {
        printf("%d",f2);
    }
}