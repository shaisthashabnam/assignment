#include<stdio.h>
int add(int,int,int);
int main()
{
	int a,b,c,sum,s=0;
	int i,fsum;
	printf("Enter 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	int arr[3]={a,b,c};
	s=0;
	for(i=0;i<3;i++)
	{
		s=s+arr[i];
	}
	fsum=add(a,b,c);
	printf("Addition of 3 no %d\n",sum);
	printf("Addition of 3 no for array %d\n",s);
	printf("Addition of 3 no using fn %d\n",fsum);
	return 0;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
