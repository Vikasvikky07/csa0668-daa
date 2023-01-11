#include<stdio.h>
int main()
{
	int i,j,n,r,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	j=n;
	while(n!=0)
	{
		r=n%10;
		sum = sum+r;
		n=n/10;
	}
	printf("sum of digits of %d = %d",j,sum);
	return 0;
}