#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a,c,d;
    scanf("%d",&a);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==a)
            {
                c=c+1;
            }
            else
            {
                d=d+1;
            }
        }
    }
    if(c!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    
}