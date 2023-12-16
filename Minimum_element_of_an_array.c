#include<stdio.h>
int main()
{
	int n,min;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
		for(i=1;i<n;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		printf("%d",min);
}