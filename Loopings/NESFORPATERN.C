// Printing downward number program using nested for by elakkiya 7/1/23
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter number of times");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	{
		for(j=0;j<=n-i;j++)
		    {
		   
			printf("* ");
			
			} 
		printf("\n");
	}
	printf("loop to be executed");
}