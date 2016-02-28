#include<stdio.h>
int main()
{
   int c, first,last,mid, n=6,search;
   int a[]={ 1, 3, 5, 7, 8, 9 };
   printf("Enter value to find\n");
   scanf("%d", &search);
   first=0;
   last =n-1;
   mid=(first+last)/2;
   while (first <= last) 
   {
      if (a[mid] < search)
      {
         first=mid+1; 
      }
      else if(a[mid]==search)
      {
         printf("%d ", mid);
         break;
      }
      else
      {
         last = mid-1;
      }
      mid=(first + last)/2;
   }
   if(first > last)
   {
      printf("Not found");
   }
   return 0;   
}

