#include<stdio.h>
int main()
{
	int a[10],i,j,n,min,max,t;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
printf("\nminimum element:%d",min);
printf("\nmaximum element :%d",max);
return 0;
}