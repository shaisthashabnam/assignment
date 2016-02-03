#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("nEnter the number");
    scanf("%d",&n);
    i=n+1;
    while(1)
    {
        for(j=2,count=0;j<=i;j++)
        {
            if(i%j == 0)
            {
                count++;
            }      
        } 
        if(count==1)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}
