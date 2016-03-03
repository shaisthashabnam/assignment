#include<stdio.h>
int main()
{
	int a[]={1,10,20,35,19};
	int n,index,i;
	printf("Enter no and index\n");
	scanf("%d\n%d\n",&n,&index);
	for(i=4;i>=index-1;i--)
	{
	    a[i+1]=a[i];
	}
	a[index]=n;
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
