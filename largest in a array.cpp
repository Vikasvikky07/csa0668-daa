#include<stdio.h>
int main()
{
	int i,n,a[5],max;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	printf("max=%d",max);
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("largest number in the array = %d",max);
	return 0;
}