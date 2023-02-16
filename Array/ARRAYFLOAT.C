 //array program integer program by elakkiya 11/1/23   
#include<stdio.h>
int main()	
{
	int n,i;
	printf("enter the array elements");
	scanf("%d",&n);
	float c[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%f",&c[i]);
    }
	for(i=0;i<n;i++)
	{
	printf("\n%f",c[i]);
    }
}
   