// find the perfect number by elakkiya 7/1/23
#include<stdio.h>
int main()
{
	int n,r,sum=0,i;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
		{
			sum=sum+i;
			
		}
    }
		if(sum==n)
		printf(" number is a perfect number ");
		else 
		printf(" number is a  not perfect number");

}