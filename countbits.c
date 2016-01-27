#include<stdio.h>
int main()
{
    int num, remainder[100], count = 0,i;

    printf("Enter a decimal integer \n");

    scanf("%d", &num);

    while (num > 0)

    {

        remainder[++i] = num % 2;
        
        num = num / 2;
         
        count++;

    }
    printf("no of bits = %d\n",count);
    
    return 0;

}
