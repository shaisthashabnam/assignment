#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[20],i,set_size,counter;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    set_size= pow(2,n);
    printf("subset elements are\n");
    for(counter=0;counter<set_size;counter++)
    {
        for(i=0;i<n;i++)
        {
            if(counter & (1<<i))
            {
                printf("%d\n",arr[i]);
            }
       printf("\n");
        }
    }
    return 0;
}    
