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
    int sum=0,avg;
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    avg=sum/n;
    int c=0;
    for(i=0;i<n;i++)
    {
        
    if(avg==arr[i])
    {
        c+=1;
    }
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}