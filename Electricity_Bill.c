#include<stdio.h>
int main()
{
    int u;
    float cpu,b,s,ta;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<199)
    {
        printf("Cost per Unit: 1.20
");
        b=u*1.20;
        printf("Bill: %.2f
",b);
    }
    else if(u>=200 && u<400)
    {
        printf("Cost per Unit: 1.40
");
        b=u*1.40;
        printf("Bill: %.2f
",b);
    }
    else if(u>=400 && u<600)
    {
        printf("Cost per Unit: 1.60
");
        b=u*1.60;
        printf("Bill: %.2f
",b);
    }
    else if(u>=600 && u<800)
    {
        printf("Cost per Unit: 1.80
");
        b=u*1.80;
        printf("Bill: %.2f
",b);
    }
    else
    {
        printf("Cost per Unit: 2.00
");
        b=u*2.00;
        printf("Bill: %.2f
",b);
    }
    if(b>400)
    {
        s=0.15*b;
        printf("Surcharge: %.2f
",s);
    }
    else
    {
        s=0;
        printf("Surcharge: %.2f
",s);
    }
    ta=b+s;
    printf("Total Amount: %.2f
",ta);
}