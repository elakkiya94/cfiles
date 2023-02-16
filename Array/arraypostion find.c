//the postion of vale find in given array13/1/23
#include<stdio.h>
int main()
{
	int i,n,pos value,a[100];
	printf("\n enter the number of elelments");
	scanf("%d",&n);
	printf("enter the elements ");
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elelments whose position to be find");
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
		pos=i+1;
		}
		prinf("\n the position is %d",pos);
	}
	
	