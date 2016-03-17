#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],optstr[20][32],opstr[20][30];
	int i,n,j=0,k=0,m,opind=0;
	printf("Enter the equation\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>=40&&str[i]<=47)
		{
			str[i]='_';
		}
	}
    for(i=0;i<n;i++)
	{
	    if(str[i]=='_')
	    {
	        continue;
	    }
	    else
	    {
	        opstr[j][k]=str[i];
	        k++;
	        if(str[i+1]=='_')
	        {
	            opstr[j][k]='\0';
	            j++;
	            k=0;
	            i++;
	            
	        }
	        
	    }
	}
	
	for(i=0;i<n;i++)
	{
        m=isnum(opstr[i]);
        if(m!=0)
        {
            strcpy(optstr[opind],opstr[i]);
            printf("%s",optstr[opind]);
            opind++;
        }
	    
	}
	//printf("%d",opind);
	return 0;
}
int isnum(char opstr[32])
{
    int n,i,c=0;
	n=strlen(opstr);
	for(i=0;i<n;i++)
	{
		if(opstr[i]>='A'&&opstr[i]<='Z'||opstr[i]<='a'&&opstr[i]>='z')
		{
			c++;
		}
	}
	if(c==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
