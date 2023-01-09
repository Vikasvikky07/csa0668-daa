#include<stdio.h>
int main()
{
	int i,j,n,a[10],min,t;
	printf("enter the number of elements :");
	scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("the selection sort of the elements:");
	for(i=0;i<n;i++)
	{
		min=a[i];
		for(j=i+1;j<n;j++)
		{
		if(a[j]<min)
		{
		t=a[j];
		a[j]=min;
		min=t;
		}	
		}
	a[i]=min;
	printf(" %d ",min);
	}
	return 0;
}