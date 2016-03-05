#include<stdio.h>
int main()
{
	int a[100],i,n,temp=0;
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
	if(n%2==0)
	{
		for(i=0;i<mid+1;i++)
		{
			temp=a[i];
			a[i]=a[i+mid+1];
			a[i+mid+1]=temp;
		}
	}
	else
	{
		for(i=0;i<mid;i++)
		{
			temp=a[i];
			a[i]=a[i+mid+1];
			a[i+mid+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
		
	return 0;	
}
