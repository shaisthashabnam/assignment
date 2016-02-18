#include<stdio.h>
int main()
{
	int n,s,d,i;
	
	int ch;
	
	printf("Enter n\n");
	
	scanf("%d",&n);

	printf("Enter Starting no\n");

	scanf("%d",&s);

	printf("Enter Difference\n");

	scanf("%d",&d);
	
	printf("Enter Type AP or GP");
	
	scanf("%d\n",&ch);

	 switch(ch)
  
	 {
	    
	 	case 1:
	    
		{
    
      			printf("AP series are\n");

	    		for(i=0;i<n;i++)

	    		{

            			printf("%d\n",s);

            			s=s+d;
	
		   	}
	
		break;
		
		}
	
		case 2:
		
		{

	    		printf("GP series are\n");
		
	    		for(i=0;i<n;i++)
	    	
	    		{
	
		      	  	printf("%d\n",s);
	
		    	    	s=s*d;
		    	}
	   	
	   	break;
	       }
	
	 }
	return 0;
    
}	
