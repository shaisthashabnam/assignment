#include<stdio.h>
int main()
{
	int a[100],i,n,k;
	int first,last,mid;
	printf("Enter no.of elements");
	scanf("%d",&n);
	printf("Enter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	first=0;
	last=n-1;
	mid=(first+last)/2;
	if(n%2!=0)
	{
		for(i=mid+1;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("%d",a[mid]);
		for(i=0;i<mid;i++)
		{
			printf("%d",a[i]);
		}
	}
	else 
	{
		for(i=mid+1;i<n;i++)
		{
			printf("%d",a[i]);
		}
		for(i=0;i<=mid;i++)
		{
			printf("%d",a[i]);
		}
	}
	return 0;	
}
