#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0,diff,sub;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    if(even>odd)
    {
        diff=even-odd;
        printf("%d ",diff);
    }
    else
    {
        sub=odd-even;
        printf("%d ",sub);
    }
}