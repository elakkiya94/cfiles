// Printing star program using nested for by elakkiya 7/1/23
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter number of times");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	{
		for(j=1;j<=i;j++)
		    {
		   
			printf("* ");
			
			} 
			
		
		printf("\n");
	}
	printf("loop to be executed");
}