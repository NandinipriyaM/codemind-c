#include<stdio.h>
int main()
{
	int i=1,N,r,ds=0;
	scanf("%d",&N);
	while(N!=0)
{
	r=N%10;
	ds=ds+r;
	N=N/10;
}
	printf("%d",ds);
}