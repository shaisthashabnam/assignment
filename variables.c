#include<stdio.h>
int main()
{
	char a[20];
	int i,n,c[10],count=0,m;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter String\n");
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
				m=a[i]-'A';
			    if(c[m]==0)
			    {
					c[m]=1;				      
					count++;
			    }
		}

	}
	printf("No of Variable%d\n",count);
	return 0;
}
