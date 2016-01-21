#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("Reversed number  %d",rev);
	return 0;
}
