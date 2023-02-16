//the function without arguemen with return by elakkiya 23/1/23
#include<stdio.h>
int mul();
void main()
{   
    
	mul();        
	                  // function call
			
		
}

int mul()
                                 //function definition
{       int result,i,a[10],n;
		printf("\n how many number to multiply:");
		scanf("%d",&n);
		result=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			result=result*a[i];
		}
		printf("%d",result);
	   
	}
                               