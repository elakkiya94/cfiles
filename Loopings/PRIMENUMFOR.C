// the program for prime numbers using for loop by elakkiya 6/1/23
#include<stdio.h>
int main()
 {
	int i,n,r,count;
	printf("enter number");
	scanf("%d",&n);
	count=0;
		for(i=2;i<n;i++)
		{
		   r=n%i;
		   if(r==0)
		   count++;
	
	}
					printf("prime number");
				 
		
  }
 