#include<stdio.h>
void main() 
{
  int a[10][10],n,i,j,temp;
  printf("Enter  size");
  scanf("%d\n",&n);
  printf("Enter the matrix\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=1;i<n;i++) 
  {
    for(j=0;j<i;j++) 
    {
      temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
  }
  printf("Transpose of matrix is ");
  for(i=0;i<n;i++) 
  {
    printf("\n");
    for(j=0;j<n;j++) 
    {
      printf("%d\t",a[i][j]);
    }
  }
}
