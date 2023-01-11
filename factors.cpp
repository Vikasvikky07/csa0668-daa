#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("enter a number:");
	scanf("%d",&n);
	printf("factors of %d =\n ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			printf("%d\n",i);
			count=count+1;
		}
	}
	printf("\nnumber of factors of %d = %d",n,count);
	return 0;
}