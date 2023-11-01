#include<stdio.h>
int main()
{
    int hf,sp,sf;
    scanf("%d%d%d",&hf,&sp,&sf);
    if(hf>50 && sp>60 && sf>100)
    {
        printf("10");
    }
    else if(hf>50 && sp>60)
    {
        printf("9");
    }
    else if(sp>60 && sf>100)
    {
        printf("8");
    }
    else if(hf>50 && sf>100)
    {
        printf("7");
    }
    else if(hf>50 || sp>60 || sf>100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}