#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,k;
	printf("enter n\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("magic square is not possible");
	}
	else
	{
		i=0;
		j=n/2;
		for(k=1;k<=n*n;k++)
		{
			a[i][j]=k;
			i--;
			j=j+1;
			if(k%n==0)
			{
				i +=2;
				--j;
			}	
			else
			{
				if(j==n)
				{
					j=j-n;
				}
			else if(i<0)
				{
					i=i+n;
				}
			}
		}
 		for (i = 0; i <n; i++)
 		{
       			 for (j = 0; j <n; j++)
        		{
           			 printf("%d\t", a[i][j]);
       			}
	printf("\n");
   		 }
  		  printf("\n");
  }
}
    
