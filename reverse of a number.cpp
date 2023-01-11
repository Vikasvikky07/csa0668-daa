#include<stdio.h>
int main()
{
	int i,j,n,r,num=0;
	printf("enter the number:");
	scanf("%d",&n);
	j=n;
	while(n!=0)
	{
		r=n%10;
		num=num*10+r;
		n=n/10;
	}
	printf("reverse of %d=%d",j,num);
	return 0;
}