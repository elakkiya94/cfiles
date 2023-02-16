//array program for getting number 11/1/23
#include<stdio.h>
int main()
{
	int n,i;
	printf("\nenter the number of array elements");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
	printf(" \n%d",a[i]);
   }

} 