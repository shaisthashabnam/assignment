#include<stdio.h>
int least_index(int a[],int x);
int main()
{
	int a[]={1,2,2,2,3,4,4},i,x;
	printf("enter X");
	scanf("%d",&x);
	i=least_index(a,x);
	printf("%d",i);
	return 0;
}
int least_index(int a[],int x)
{
	int i;
	for(i=0;i<7;i++)
	{
		if(a[i]>x)
		{
			break;
		}
	}
	if(i<7)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
	
	
