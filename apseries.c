#include<stdio.h>
int main()
{
	int n,s,d,i;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter Starting no\n");
	scanf("%d",&s);
	printf("Enter Difference\n");
	scanf("%d",&d);
	printf("AP series are\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",s);
		s=s+d;
	
	}
	return 0;
}
 
