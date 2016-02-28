#include<stdio.h>
int inarray(int a[],int n);
int main()
{
	int a[]={ 2, 5, 4, 10, 9, 8, 5};
	int n,b;
	scanf("%d",&n);
	b=inarray(a,n);
	printf("%d",b);
	return 0;
	
}
int inarray(int a[],int n)
{
	int flag,i;
	flag=n;
	for(i=0;i<7;i++)
	{
		if(a[i]==flag)
		{
		        return i;
		}
		else
		{
		    return -1;
		}
	
	}

}
