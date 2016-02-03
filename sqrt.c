#include<stdio.h>
int main()
{
	int n,i;
	float r=2;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		r=(r+(n/r))/2;
	}
	printf("%f",r);
	return 0;
}
